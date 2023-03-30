/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:52:04 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/27 09:52:04 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_hundred(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	ft_push_chunk(pile_a, pile_b, pile_sort);
	while (pile_b->size > 0)
	{
		higher_to_top(pile_b);
		ft_pa(pile_a, pile_b);
	}
}

void	ft_push_chunk(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	int	i;
	int	chunk;

	i = 0;
	if (pile_a->size < 51)
		pile_a->chunk = 1;
	else if (pile_a->size < 101)
		pile_a->chunk = 5;
	else
		pile_a->chunk = 11;
	pile_a->nombre = pile_a->size / pile_a->chunk;
	chunk = pile_a->nombre;
	while (pile_a->size > 1)
	{
		while (i < pile_a->nombre)
		{
			index_to_top(pile_a, pile_sort);
			ft_pb(pile_a, pile_b);
			i++;
		}
		pile_a->nombre = pile_a->nombre + chunk;
	}
}

int	get_index(t_pile *pile, t_pile *pile_sort)
{
	int	i;
	int	j;

	i = 0;
	j = pile->size - 1;
	while (pile->array[i] > pile_sort->array[pile->nombre - 1])
	{
		i++;
	}
	while (pile->array[j] > pile_sort->array[pile->nombre - 1])
	{
		j--;
	}
	if (pile->size - j < i)
		return (j);
	else
		return (i);
}

void	index_to_top(t_pile *pile, t_pile *pile_sort)
{
	int	index;
	int	cut;

	index = get_index(pile, pile_sort);
	if (index < 0)
		index = 0;
	cut = pile->size / 2 + 1;
	while (index != pile->index)
	{
		if (index < cut)
		{
			ft_ra(pile);
			index--;
		}
		else
		{
			ft_rra(pile);
			index++;
			if (index > pile->size - 1)
				index = 0;
		}
	}
	return ;
}
