/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llaurenc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:36:22 by llaurenc          #+#    #+#             */
/*   Updated: 2023/03/13 17:35:59 by llaurenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <stdarg.h>
# include "libft/libft.h"

void	push_swap(int argc, char **argv);
int		check_args(char **argv);
int		is_sign(char c);
int		is_digit(char c);

#endif
