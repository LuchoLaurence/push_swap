/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:43:57 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 11:41:28 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// check si le caractere est un signe
int	is_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

//verifie que le caractere est un nombre
int	is_digit(char c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}

// check si l'arg passe en parametres est un nombre
int	arg_is_number(char *argv)
{
	int	i;

	i = 0;
	while (argv[i] != '\0')
	{
		while (argv[i] == ' ')
			i++;
		if (argv[i] == '\0')
			break ;
		if (is_sign(argv[i]) && argv[i + 1] != '\0')
			i++;
		if (!is_digit(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	arg_is_doublon(char **argv)
{
	int	i;

	i = 2;
	while (argv[i])
	{
		if (!arg_compare(argv, i))
			return (0);
		i++;
	}
	return (1);
}

// check si les args sont valides ou non
int	check_args(char **argv)
{
	int			i;
	long int	nb;

	i = 1;
	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		nb = ft_ps_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			return (0);
		i++;
	}
	if (!is_zero(argv))
		return (0);
	if (!arg_is_doublon(argv))
		return (0);
	return (1);
}
