/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:07:28 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/25 12:09:42 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "push_swap.h"

int main(int ac, char **av)
{
    stackNode	*stack_a;
	stackNode	*stack_b;
    
    if (ac < 2)
		return (0);
	if (!valid_input(av))
		error(NULL, NULL);
    return (0);
}