/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:07:33 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 16:35:46 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*int main()
{
// Crea un nuovo e restituisce un puntatore ad esso
// Puo essere utilizzato come "testa" di una lista concatenata
// Per il momento punta a NULL perchè è la "testa" ma anche la "coda"
	t_list *newNode = ft_lstnew("Ciao mamma");

// Stampa del contenuto del nuovo nodo
	printf("Contenuto del nuovo nodo: %s\n", (char *)newNode->content);
	free(newNode);
	return (0);
}*/
