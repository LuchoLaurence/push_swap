/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 15:14:30 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/22 10:43:00 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_ps_atoi(char *str)
{
	long int	nb;
	int			i;
	int			signe;

	i = 0;
	nb = 0;
	signe = 1;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -signe;
		i++;
	}
	while (str[i])
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * signe);
}

int	is_zero(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		if (!ft_ps_atoi(argv[i]))
		{
			j++;
		}
		i++;
	}
	if (j > 1)
		return (0);
	return (1);
}

int	arg_compare(char **argv, int i)
{
	int	j;

	j = i - 1;
	while (j > 0)
	{
		if (!ft_strcmp(argv[i], argv[j]))
			return (0);
		j--;
	}
	return (1);
}
