/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 11:02:20 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 12:01:13 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int	check_cmp(const char *av1, const char *av2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (av1[i] != '\0' && av1[i] == '+')
	{
		if (av2[j] != '\0' && av2[j] != '+')
			i++;
	}
	else
	{
		if (av2[j] != '\0' && av2[j] == '+')
			j++;
	}
	while (av1[i] && av2[j] && av1[i] == av2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)av1[i] - (unsigned char)av2[j]);	
}

void	free_stack(stackNode **stack)
{
	stackNode	*tmp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}

void	error(stackNode **stack_a, stackNode **stack_b)
{
	if (stack_a == NULL || *stack_a != NULL)
		free_stack(stack_a);
	if (stack_b == NULL || *stack_b != NULL)
		free_stack(stack_b);
	write(2, "Error\n", 6);
	exit (1);
}