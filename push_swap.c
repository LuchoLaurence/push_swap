/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 11:18:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/13 16:44:28 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{

}

int main(int argc, char** argv)
{
	if(!check_args(argv))
	{
		ft_putstr_fd("Erreur \n", 2);
	}
	push_swap(argc, argv);
}
