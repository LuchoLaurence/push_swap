/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:18:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/30 13:37:01 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_pile *pile_a, t_pile *pile_b)
{
	t_pile	*pile_sort;

	pile_sort = ft_sort_pile(pile_a);
	ft_all(pile_a, pile_b, pile_sort);
}

void	ft_all(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	if (pile_a->size == 2)
	{
		ft_sa(pile_a);
	}
	else if (pile_a->size == 3)
	{
		ft_sort_three(pile_a);
	}
	else if (pile_a->size == 4)
	{
		ft_sort_four(pile_a, pile_b);
	}
	else if (pile_a->size == 5)
	{
		ft_sort_five(pile_a, pile_b);
	}
	else
	{
		ft_sort_hundred(pile_a, pile_b, pile_sort);
	}
}

void	print_pile(t_pile *pile)
{
	int	i;

	i = 0;
	while (i < pile->size)
	{
		printf("pile->[%d] = %d\n", i, pile->array[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_pile	*pile_a;
	t_pile	*pile_b;

	if (argc < 2)
		return (0);
	if (argc == 2)
	{
		argv = ft_split(argv[1], " ");
	}
	if (!check_args(argv))
	{
		ft_putstr_fd("Error \n", 2);
		return (0);
	}
	pile_a = create_pile(argc);
	pile_b = create_pile(argc);
	pile_b->size = 0;
	pile_b->index = 0;
	pile_a = fill_pile(pile_a, argv);
	if (is_sorted(pile_a))
		return (0);
}
