/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 14:00:32 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/30 14:01:39 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_ps_split(char *arg, char c)
{
	char	**split;
	int		i;
	int		j;
	int		mot;

	i = 0;
	j = 0;
	mot = ft_mot;
	while (arg[i])
	{
		while (arg[i] == c)
			i++;
		j = i;
		while (arg[i] != c)
			i++;
	split[k] = ft_substr(arg, j, i-j);
	}
	return (split);
}