/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 14:37:13 by llaurenc          #+#    #+#             */
/*   Updated: 2023/04/03 11:18:25 by llaurenc         ###   ########.fr       */
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
	j = 1;
	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_mot(s, c) + 2));
	if (tab == NULL)
		return (NULL);
	tab [0] = "./push_swap";
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
