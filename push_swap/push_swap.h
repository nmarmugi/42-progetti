/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:03:43 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/28 20:03:45 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"
# include <limits.h>

typedef struct stack
{
	int				value;
	struct stack	*next;
	struct stack	*prev;
}	t_stackNode;

int		main(int ac, char **av);
char	**av_one_arg(char **av);
char	**av_args(char **av);
int		have_duplicates(char **av);
int		have_duplicates_arr(char **av);
int		is_correct_zero(char **av);
int		is_correct_zero_arr(char **av);
int		arg_is_zero(char *av);

#endif
