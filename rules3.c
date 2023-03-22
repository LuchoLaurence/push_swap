/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:19:35 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/22 10:43:11 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_pile *pile_a, t_pile *pile_b)
{
	int	temp;
	int	i;

	temp = pile_a->array[pile_a->size];
	i = pile_a->size;
	while (i > 0)
	{
		pile_a->array[i] = pile_a->array[i - 1];
		i--;
	}
	pile_a->array[0] = temp;
	temp = pile_b->array[pile_b->size];
	i = pile_b->size;
	while (i > 0)
	{
		pile_b->array[i] = pile_b->array[i - 1];
		i--;
	}
	pile_b->array[0] = temp;
	ft_putstr_fd("rrr\n", 1);
}
