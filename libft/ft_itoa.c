/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:03:00 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/22 10:48:49 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mal(int nb)
{
	int				i;
	unsigned int	b;

	i = 1;
	b = nb;
	if (nb < 0)
	{
		i = i + 1;
		b = -nb;
	}
	while (b >= 10)
	{
		b = b / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	i = ft_mal(n);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	nb = n;
	if (n < 0)
		nb = n * -1;
	while (i > 0)
	{
		str[i - 1] = (nb % 10) + 48;
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
