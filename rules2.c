/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:17:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/24 12:56:10 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_ra(t_pile *pile)
{
	int temp;
	int i;

	temp = pile->array[0];
	i = 1;
	while (i < pile->size)
	{
		pile->array[i - 1] = pile->array[i];
		i++;
	}
	pile->array[pile->size - 1] = temp;
	ft_putstr_fd("ra\n", 1);
}

void ft_rb(t_pile *pile)
{
	int temp;
	int i;

	temp = pile->array[0];
	i = 1;
	while (i < pile->size)
	{
		pile->array[i - 1] = pile->array[i];
		i++;
	}
	pile->array[pile->size - 1] = temp;
	ft_putstr_fd("rb\n", 1);
}

void ft_rr(t_pile *pile_a, t_pile *pile_b)
{
	int temp;
	int i;

	temp = pile_a->array[0];
	i = 1;
	while (i < pile_a->size)
	{
		pile_a->array[i - 1] = pile_a->array[i];
		i++;
	}
	pile_a->array[pile_a->size - 1] = temp;
	temp = pile_b->array[0];
	i = 1;
	while (i < pile_b->size)
	{
		pile_b->array[i - 1] = pile_b->array[i];
		i++;
	}
	pile_b->array[pile_b->size - 1] = temp;
	ft_putstr_fd("rr\n", 1);
}

void ft_rra(t_pile *pile)
{
	int temp;
	int i;

	temp = pile->array[pile->size - 1];
	i = pile->size - 1;
	while (i > 0)
	{
		pile->array[i] = pile->array[i - 1];
		i--;
	}
	pile->array[0] = temp;
	ft_putstr_fd("rra\n", 1);
}

void ft_rrb(t_pile *pile)
{
	int temp;
	int i;

	temp = pile->array[pile->size - 1];
	i = pile->size - 1;
	while (i > 0)
	{
		pile->array[i] = pile->array[i - 1];
		i--;
	}
	pile->array[0] = temp;
	ft_putstr_fd("rrb\n", 1);
}
