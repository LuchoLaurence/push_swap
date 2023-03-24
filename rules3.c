/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:19:35 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/24 12:33:33 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rrr(t_pile *pile_a, t_pile *pile_b)
{
	int temp;
	int i;

	temp = pile_a->array[pile_a->size - 1];
	i = pile_a->size - 1;
	while (i > 0)
	{
		pile_a->array[i] = pile_a->array[i - 1];
		i--;
	}
	pile_a->array[0] = temp;
	temp = pile_b->array[pile_b->size - 1];
	i = pile_b->size - 1;
	while (i > 0)
	{
		pile_b->array[i] = pile_b->array[i - 1];
		i--;
	}
	pile_b->array[0] = temp;
	ft_putstr_fd("rrr\n", 1);
}
