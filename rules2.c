/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:17:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 11:39:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(int *a, int size_a)
{
	int	temp;
	int	i;

	temp = a[0];
	i = 1;
	while (i < size_a)
	{
		a[i - 1] = a[i];
		i++;
	}
	a[size_a] = temp;
	ft_putstr_fd("ra\n", 1);
}

void	ft_rb(int *b, int size_b)
{
	int	temp;
	int	i;

	temp = b[0];
	i = 1;
	while (i < size_b)
	{
		b[i - 1] = b[i];
		i++;
	}
	b[size_b] = temp;
	ft_putstr_fd("rb\n", 1);
}

void	ft_rr(int *a, int size_a, int *b, int size_b)
{
	int	temp;
	int	i;

	temp = a[0];
	i = 1;
	while (i < size_a)
	{
		a[i - 1] = a[i];
		i++;
	}
	a[size_a] = temp;
	temp = b[0];
	i = 1;
	while (i < size_a)
	{
		b[i - 1] = b[i];
		i++;
	}
	b[size_b] = temp;
	ft_putstr_fd("rr\n", 1);
}

void	ft_rra(int *a, int size_a)
{
	int	temp;
	int	i;

	temp = a[size_a];
	i = size_a;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = temp;
	ft_putstr_fd("rra\n", 1);
}

void	ft_rrb(int *b, int size_b)
{
	int	temp;
	int	i;

	temp = b[size_b];
	i = size_b;
	while (i > 0)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[0] = temp;
	ft_putstr_fd("rrb\n", 1);
}