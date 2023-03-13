/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_check.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:43:57 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/13 17:37:51 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// check si le caractere est un signe
int	is_sign(char c)
{
	if (c != '+' || c != '-')
		return (0);
	return (1);
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
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !is_digit(argv[i]))
		return (0);

	return (1);
}

// check si les args sont valides ou non
int	check_args(char **argv)
{
	int	i;

	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		i++;
	}

	return (1);
}
