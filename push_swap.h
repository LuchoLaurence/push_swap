/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:36:22 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/21 15:32:22 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_pile
{
	int	*array;
	int	size;
	int	index;
}	t_pile;

void		push_swap(int argc, char **argv);
int			check_args(char **argv);
int			arg_is_number(char *argv);
int			is_sign(char c);
int			is_digit(char c);
int			arg_is_doublon(char **argv);
int			arg_compare(char **argv, int i);
int			is_zero(char **argv);
long int	ft_ps_atoi(char *str);
void		ft_sa(int *a, int size_a);
void		ft_sb(int *b, int size_b);
void		ft_ss(int *a, int *b, int size_a, int size_b);
void		ft_pa(int *a, int *b, int *size_a, int *size_b);
void		ft_pb(int *a, int *b, int *size_a, int *size_b);
void		ft_ra(int *a, int size_a);
void		ft_rb(int *b, int size_b);
void		ft_rr(int *a, int size_a, int *b, int size_b);
void		ft_rra(int *a, int size_a);
void		ft_rrb(int *b, int size_b);
void		ft_rrr(int *a, int size_a, int *b, int size_b);
int			*fill_pile(int argc, char **argv);

#endif
