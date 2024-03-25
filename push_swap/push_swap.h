/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 08:43:15 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 12:09:45 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./libft/libft.h"

typedef struct stack
{
	int	value;
	struct stack *next;
	struct stack *prev;
}	stackNode;

int main(int ac, char **av);
int	check_cmp(const char *av1, const char *av2);
int	valid_input(char **av);
void	error(stackNode **stack_a, stackNode **stack_b);
void	free_stack(stackNode **stack);

#endif
