/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 11:00:53 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/28 10:04:07 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len1;
	int		j;

	j = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	len1 = ft_strlen(s1) + ft_strlen(s2);
	str = malloc (sizeof(char) * (len1 + 1));
	if (str == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (i < len1)
	{
		str[i] = s2[j++];
		i++;
	}
	str[i] = '\0';
	return (str);
}
