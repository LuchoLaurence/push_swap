/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 18:03:04 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/28 18:03:04 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void   higher_to_top(t_pile *pile)
{
   int indexmax;
   int cut;

   indexmax = get_higher(pile);
   printf("higher to top : index max = %d\n", indexmax);
   cut = pile->size / 2 + 1;
   while (indexmax != pile->index)
   {
        if (indexmax < cut)
        {
            ft_rb(pile);
            indexmax--;
        }
        else
        {
            ft_rrb(pile);
            indexmax++;
            if (indexmax > pile->size - 1)
                indexmax = 0;
        }
   }
    return;
}

int get_higher(t_pile *pile)
{
    int i;
    int nb;

    i = 1;
    nb = 0;
    while (i < pile->size)
    {
        if(pile->array[nb] < pile->array[i])
            nb = i;
        i++;
    }
    return(nb);
}