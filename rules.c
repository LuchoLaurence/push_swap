/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:05:52 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/29 18:35:20 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//debut des fonctions de tri obligatoire

void	ft_sa(t_pile *pile)
{
	int	temp;

	if (pile->size < 2)
		return ;
	temp = pile->array[0];
	pile->array[0] = pile->array[1];
	pile->array[1] = temp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(t_pile *pile)
{
	int	temp;

	if (pile->size < 2)
		return ;
	temp = pile->array[0];
	pile->array[0] = pile->array[1];
	pile->array[1] = temp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_ss(t_pile *pile_a, t_pile *pile_b)
{
	int	temp;

	if (pile_a->size < 2)
		return ;
	if (pile_b->size < 2)
		return ;
	temp = pile_a->array[0];
	pile_a->array[0] = pile_a->array[1];
	pile_a->array[1] = temp;
	temp = pile_b->array[0];
	pile_b->array[0] = pile_b->array[1];
	pile_b->array[1] = temp;
	ft_putstr_fd("ss\n", 1);
}

void	ft_pa(t_pile *pile_a, t_pile *pile_b)
{
	int	i;

	i = (pile_a->size - 1);
	if (pile_b->size < 1)
		return ;
	while (i >= 0)
	{
		pile_a->array[i + 1] = pile_a->array[i];
		i--;
	}
	pile_a->array[0] = pile_b->array[0];
	(pile_a->size)++;
	i = 1;
	while (i < pile_b->size)
	{
		pile_b->array[i - 1] = pile_b->array[i];
		i++;
	}
	(pile_b->size)--;
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(t_pile *pile_a, t_pile *pile_b)
{
	int	i;

	i = (pile_b->size - 1);
	if (pile_a->size < 1)
		return ;
	while (i >= 0)
	
	{
		pile_b->array[i + 1] = pile_b->array[i];
		i--;
	}
	pile_b->array[0] = pile_a->array[0];
	(pile_b->size)++;
	i = 1;
	while (i < pile_a->size)
	{
		pile_a->array[i - 1] = pile_a->array[i];
		i++;
	}
	(pile_a->size)--;
	ft_putstr_fd("pb\n", 1);
}
