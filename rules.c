/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:05:52 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 11:39:58 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//debut des fonctions de tri obligatoire

void	ft_sa(int *a, int size_a)
{
	int	temp;

	if (size_a < 2)
		return ;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	ft_putstr_fd("sa\n", 1);
}

void	ft_sb(int *b, int size_b)
{
	int	temp;

	if (size_b < 2)
		return ;
	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
	ft_putstr_fd("sb\n", 1);
}

void	ft_ss(int *a, int *b, int size_a, int size_b)
{
	int	temp;

	if (size_a < 2)
		return ;
	if (size_b < 2)
		return ;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
	ft_putstr_fd("ss\n", 1);
}

void	ft_pa(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	i = (*size_a);
	if (*size_b == 0)
		return ;
	while (i >= 0)
	{
		a[i + 1] = a[i];
		i--;
	}
	a[0] = b[0];
	(*size_a)++;
	i = 1;
	while (i < *size_b)
	{
		b[i - 1] = b[i];
		i++;
	}
	(*size_b) --;
	ft_putstr_fd("pa\n", 1);
}

void	ft_pb(int *a, int *b, int *size_a, int *size_b)
{
	int	i;

	if (*size_a == 0)
		return ;
	i = (*size_b - 1);
	while (i >= 0)
	{
		b[i + 1] = b[i];
		i--;
	}
	b[0] = a[0];
	(*size_b)++;
	i = 1;
	while (i < (*size_a))
	{
		a[i - 1] = a[i];
		i++;
	}
	(*size_a)--;
	ft_putstr_fd("pb\n", 1);
}