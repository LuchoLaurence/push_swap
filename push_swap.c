/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:18:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/22 15:37:37 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_pile *pile_a, t_pile *pile_b)
{	
	t_pile	*pile_sort;
	int		i;

	i = 0;
	printf("push_swap\n");
	pile_sort = ft_sort_pile(pile_a);
	print_pile(pile_sort);
	ft_all(pile_a, pile_b, pile_sort);
	
}

void	ft_all(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
	if (pile_a->size == 2)
		ft_sa(pile_a);
	else if (pile_a->size == 3)
		ft_sort_three(pile_a);
	else if (pile_a->size < 6)
		ft_sort_five(pile_a, pile_b);
	else if (pile_a->size < 101)
		ft_sort_tiny(pile_a, pile_b, pile_sort);
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
	int		i;

	i = 0;
	if (argc < 2)
		return (0);
	if (!check_args(argv))
	{
		ft_putstr_fd("Error \n", 2);
		return (0);
	}
	pile_a = create_pile(argc);
	pile_b = create_pile(argc);
	pile_a = fill_pile(pile_a, argv);
	if (is_sorted(pile_a))
		return (0);
	printf("pile->array[0] : %d\npile->size : %d\n\n", pile_a->array[0], pile_a->size);
	push_swap(pile_a, pile_b);
}
