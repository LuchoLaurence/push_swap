/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 04:23:02 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/13 06:32:48 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	t;
	char			*str;

	str = (char *)s;
	t = (unsigned char) c;
	i = 0;
	while (str[i] != t)
	{
		if (str[i] == '\0')
			return (NULL);
		i++;
	}
	return (str + i);
}
