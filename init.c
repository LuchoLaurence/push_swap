/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:20:55 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 14:40:23 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_pile(int argc, char **argv)
{
	int	*pile;
	int	i;

	i = 2;
	pile = malloc(sizeof(int) * (argc - 1));
	while (argv[i])
	{
		pile[i - 2] = ft_ps_atoi(argv[i]);
		i++;
	}
	return (pile);
}