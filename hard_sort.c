/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hard_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 09:52:04 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/27 09:52:04 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_sort_hundred(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
    ft_push_chunk(pile_a, pile_b, pile_sort);
    printf("\n pile b :\n");
    print_pile(pile_b);
    while (pile_b->size > 0)
    {
        printf("pile_b->index = %d\n", pile_b->index);
        higher_to_top(pile_b);
        ft_pa(pile_a, pile_b);
    }
    printf("\n pile a :\n");
    print_pile(pile_a);
    printf("\n pile b :\n");
    print_pile(pile_b);
}

void ft_push_chunk(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort)
{
    int i;
    int chunk;

    i = 0;
    if (pile_a->size < 51)
        pile_a->chunk = 1;
    else if (pile_a->size < 101)
        pile_a->chunk = 5;
    else
        pile_a->chunk = 10;
    pile_a->nombre = pile_a->size / pile_a->chunk;
    chunk = pile_a->nombre;
    while (pile_a->size > 1)
    {
        while (i < pile_a->nombre)
        {
            index_to_top(pile_a, pile_sort);
            ft_pb(pile_a, pile_b);
            printf("i = : %d\n", i);
            i++;
        }
        pile_a->nombre = pile_a->nombre + chunk;
        printf("nombre = nombre + nombre : %d\n", pile_a->nombre);
    }
    printf("\nend push chunk\n");
}

int get_index(t_pile *pile, t_pile *pile_sort)
{
    int i;
    int j;

    i = 0;
    j = pile->size - 1;
    while (pile->array[i] > pile_sort->array[pile->nombre - 1])
    {
        i++;
    }
    while (pile->array[j] > pile_sort->array[pile->nombre - 1])
    {
        j--;
    }
    // printf("get index i : %d      et j : %d   et pile_>size : %d   et pile ->nombre : %d\n", i, j, pile->size, pile->nombre);
    if (pile->size - j < i)
        return (j);
    else
        return (i);
}

void index_to_top(t_pile *pile, t_pile *pile_sort)
{
    int index;
    int cut;

    index = get_index(pile, pile_sort);
    printf("index to top : index = %d\n", index);
    cut = pile->size / 2 + 1;
    while (index != pile->index)
    {
        if (index < cut)
        {
            ft_ra(pile);
            index--;
        }
        else
        {
            ft_rra(pile);
            index++;
            if (index > pile->size - 1)
                index = 0;
        }
    }
    return;
}
