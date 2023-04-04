/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:12:24 by llaurenc          #+#    #+#             */
/*   Updated: 2023/04/03 13:25:35 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_lower(t_pile *pile)
{
	int	nb;
	int	i;

	i = 1;
	nb = 0;
	while (i < pile->size)
	{
		if (pile->array[nb] > pile->array[i])
		{
			nb = i;
		}
		i++;
	}
	return (nb);
}

void	ft_sort_four(t_pile *pile_a, t_pile *pile_b)
{
	lower_to_top(pile_a);
	ft_pb(pile_a, pile_b);
	ft_sort_three(pile_a);
	ft_pa(pile_a, pile_b);
	return ;
}

void	ft_sort_three(t_pile *pile_a)
{
	if (pile_a->array[0] > pile_a->array[1]
		&& pile_a->array[1] > pile_a->array[2])
	{
		ft_ra(pile_a);
		ft_sa(pile_a);
	}
	else if (pile_a->array[0] > pile_a->array[1]
		&& pile_a->array[1] < pile_a->array[2]
		&& pile_a->array[0] > pile_a->array[2])
		ft_ra(pile_a);
	else if (pile_a->array[0] > pile_a->array[1]
		&& pile_a->array[2] > pile_a->array[0])
		ft_sa(pile_a);
	else if (pile_a->array[0] < pile_a->array[1]
		&& pile_a->array[2] < pile_a->array[1]
		&& pile_a->array[0] < pile_a->array[2])
	{
		ft_sa(pile_a);
		ft_ra(pile_a);
	}
	else if (pile_a->array[0] < pile_a->array[1]
		&& pile_a->array[2] < pile_a->array[1]
		&& pile_a->array[0] > pile_a->array[2])
		ft_rra(pile_a);
	return ;
}

void	lower_to_top(t_pile *pile)
{
	int	indexmin;
	int	cut;

	indexmin = get_lower(pile);
	cut = pile->size / 2 + 1;
	while (indexmin != pile->index)
	{
		if (indexmin < cut)
		{
			ft_ra(pile);
			indexmin--;
		}
		else
		{
			ft_rra(pile);
			indexmin++;
			if (indexmin > pile->size - 1)
				indexmin = 0;
		}
	}
	return ;
}

void	ft_sort_five(t_pile *pile_a, t_pile *pile_b)
{
	lower_to_top(pile_a);
	ft_pb(pile_a, pile_b);
	lower_to_top(pile_a);
	ft_pb(pile_a, pile_b);
	ft_sort_three(pile_a);
	ft_pa(pile_a, pile_b);
	ft_pa(pile_a, pile_b);
	return ;
}
