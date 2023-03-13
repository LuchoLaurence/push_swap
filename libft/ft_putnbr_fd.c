/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:09:27 by llaurenc          #+#    #+#             */
/*   Updated: 2022/12/01 16:48:03 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd, int *count)
{
	unsigned int	nb;

	nb = n;
	if (n < 0)
	{
		nb = n * -1;
		ft_putchar_fd('-', fd, count);
	}
	if (nb > 9)
	{
		ft_putnbr_fd (nb / 10, fd, count);
		ft_putnbr_fd (nb % 10, fd, count);
	}
	else
		ft_putchar_fd(nb + '0', fd, count);
}
