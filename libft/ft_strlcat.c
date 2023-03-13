/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:11:41 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/19 16:52:26 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (dst == NULL && dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize && dst[i])
		i++;
	j = i;
	if (dstsize > ft_strlen(dst))
	{
		while (src[i - j] && i < dstsize - 1)
		{
			dst[i] = src[i - j];
			i++;
		}
	}
	if (j < dstsize)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}
