/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:36:22 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/28 17:36:05 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

#define PUSH_SWAP_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include "libft/libft.h"

typedef struct s_pile
{
	int *array;
	int size;
	int index;
	int chunk;
	int nombre;
} t_pile;

int check_args(char **argv);
int arg_is_number(char *argv);
int is_sign(char c);
int is_digit(char c);
int arg_is_doublon(char **argv);
int arg_compare(char **argv, int i);
int is_zero(char **argv);
long int ft_ps_atoi(char *str);
void ft_sa(t_pile *pile);
void ft_sb(t_pile *pile);
void ft_ss(t_pile *pile_a, t_pile *pile_b);
void ft_pa(t_pile *pile_a, t_pile *pile_b);
void ft_pb(t_pile *pile_a, t_pile *pile_b);
void ft_ra(t_pile *pile);
void ft_rb(t_pile *pile);
void ft_rr(t_pile *pile_a, t_pile *pile_b);
void ft_rra(t_pile *pile);
void ft_rrb(t_pile *pile);
void ft_rrr(t_pile *pile_a, t_pile *pile_b);
t_pile *fill_pile(t_pile *pile, char **argv);
t_pile *create_pile(int argc);
int is_sorted(t_pile *pile);
void push_swap(t_pile *pile_a, t_pile *pile_b);
void ft_sort(t_pile *pile);
t_pile *ft_sort_pile(t_pile *pile);
void ft_all(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort);
void ft_sort_five(t_pile *pile_a, t_pile *pile_b);
void ft_sort_three(t_pile *pile_a);
int get_lower(t_pile *pile);
void lower_to_top(t_pile *pile);
void ft_sort_four(t_pile *pile_a, t_pile *pile_b);
void ft_sort_hundred(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort);
void index_to_top(t_pile *pile, t_pile *pile_sort);
int get_index(t_pile *pile, t_pile *pile_sort);
void ft_push_chunk(t_pile *pile_a, t_pile *pile_b, t_pile *pile_sort);
void higher_to_top(t_pile *pile);
int get_higher(t_pile *pile);

void print_pile(t_pile *pile);

#endif
