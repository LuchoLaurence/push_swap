/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:12:24 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/22 15:53:59 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_tiny(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	pile_a = pile_sort;
	pile_b = pile_sort;
	return ;
}

void	ft_sort_three(t_pile *pile_a)
{
	int	*arr;
	int	i;

	arr = pile_a->array;
	i = 0;
	if (arr[0] > arr[1] && arr[1] > arr[2]) 3 2 1
	{
		ft_ra(pile_a);
		ft_sa(pile_a);
	}
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2]) 3 1 2
	{
		ft_ra(pile_a);
	}
	if (arr[0] > arr[1]  && arr[2] > arr[0]) 2 1 3
	{
		ft_sa(pile_a);
	}
	if (arr[0] < arr[1]  && arr[2] < arr[1] && arr[0] < arr[2]) 1 3 2
	{
		ft_sa(pile_a);
		ft_ra(pile_a);
	}
	if (arr[0] < arr[1]  && arr[2] < arr[1] && arr[0] > arr[2]) 2 3 1
	{
		ft_rra(pile_a);
	}
	return ;
}

void	ft_sort_five(t_pile *pile_a, t_pile *pile_b)
{
	int	min;
	int	min1;
	int	cut;
	
	min = get_lower(pile_a);
	cut = pile_a->size / 2 + 1;
	
	return ;
}
