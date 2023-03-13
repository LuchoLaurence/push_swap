/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:37:13 by llaurenc          #+#    #+#             */
/*   Updated: 2022/11/19 16:50:39 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_mot(const char *s, char c)
{
	size_t	nb;
	size_t	i;

	nb = 0;
	i = nb;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
			nb = nb + 1;
		while (s[i] != c && s[i])
			i++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	deb;
	char	**tab;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_mot(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		deb = i;
		while (s[i] != c && s[i])
			i++;
		if (deb != i)
			tab[j++] = ft_substr(s, deb, i - deb);
	}
	tab[j] = 0;
	return (tab);
}
