/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:20:55 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/24 12:33:34 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_pile *ft_sort_pile(t_pile *pile)
{
	t_pile *pile_sort;
	int i;

	i = 0;
	pile_sort = create_pile(pile->size + 1);
	while (i < pile->size)
	{
		pile_sort->array[i] = pile->array[i];
		i++;
	}
	ft_sort(pile_sort);
	return (pile_sort);
}

int is_sorted(t_pile *pile)
{
	int i;

	i = 0;
	while (i < pile->size - 1)
	{
		if (pile->array[i] > pile->array[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void ft_sort(t_pile *pile)
{
	int i;
	int temp;

	while (!is_sorted(pile))
	{
		i = 0;
		while (i < pile->size - 1)
		{
			if (pile->array[i] > pile->array[i + 1])
			{
				temp = pile->array[i];
				pile->array[i] = pile->array[i + 1];
				pile->array[i + 1] = temp;
			}
			i++;
		}
	}
}

t_pile *fill_pile(t_pile *pile, char **argv)
{
	int i;

	i = 0;
	while (i < pile->size)
	{
		pile->array[i] = ft_ps_atoi(argv[i + 1]);
		i++;
	}
	pile->index = 0;
	return (pile);
}

t_pile *create_pile(int argc)
{
	t_pile *pile;

	pile = malloc(sizeof(t_pile));
	if (!pile)
		return (NULL);
	pile->array = malloc(sizeof(int) * (argc - 1));
	if (!pile->array)
		return (NULL);
	pile->index = -1;
	pile->size = argc - 1;
	return (pile);
}
