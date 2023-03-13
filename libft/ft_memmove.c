/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:59:24 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/22 10:57:10 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*src2;
	char		*dst2;

	src2 = (const char *)src;
	i = 0;
	dst2 = (char *)dst;
	if (dst2 == src2)
		return (dst2);
	if (dst2 > src2)
	{
		while (len-- > 0)
			dst2[len] = src2[len];
	}
	else
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
