/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 14:12:24 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/24 12:58:46 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_lower(t_pile *pile)
{
	int nb;
	int i;

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

void ft_sort_tiny(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	pile_a = pile_sort;
	pile_b = pile_sort;
	pile_a++;
	pile_b--;

	return;
}

void ft_sort_three(t_pile *pile_a)
{
	int *arr;

	arr = pile_a->array;
	if (arr[0] > arr[1] && arr[1] > arr[2])
	{
		ft_ra(pile_a);
		ft_sa(pile_a);
	}
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ft_ra(pile_a);
	if (arr[0] > arr[1] && arr[2] > arr[0])
		ft_sa(pile_a);
	if (arr[0] < arr[1] && arr[2] < arr[1] && arr[0] < arr[2])
	{
		ft_sa(pile_a);
		ft_ra(pile_a);
	}
	if (arr[0] < arr[1] && arr[2] < arr[1] && arr[0] > arr[2])
		ft_rra(pile_a);
	return;
}

void lower_to_top(t_pile *pile)
{
	int indexmin;
	int cut;
	indexmin = get_lower(pile);
	printf("lower to top : index min = %d\n", indexmin);
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
	return;
}

void ft_sort_five(t_pile *pile_a, t_pile *pile_b)
{
	print_pile(pile_a);
	lower_to_top(pile_a);
	ft_pb(pile_a, pile_b);

	lower_to_top(pile_a);
	ft_pb(pile_a, pile_b);

	ft_sort_three(pile_a);
	ft_pa(pile_a, pile_b);
	ft_pa(pile_a, pile_b);
	print_pile(pile_a);

	return;
}
