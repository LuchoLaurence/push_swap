/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 09:39:46 by llaurenc          #+#    #+#             */
/*   Updated: 2022/12/02 09:28:38 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *count)
{
	int	i;

	if (!s)
	{
		write(fd, "(null)", 6);
		*count = *count + 6;
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd, count);
		i++;
	}
}
