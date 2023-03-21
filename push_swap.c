/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:18:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 15:41:06 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{

}

int	main(int argc, char **argv)
{
	t_pile	a;
	t_pile	b;

	if (argc < 2)
		return (0);
	if (!check_args(argv))
	{
		ft_putstr_fd("Error \n", 2);
		return (0);
	}

	a->array = fill_pile(argc, argv);
	push_swap(argc, argv);
}
