/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:55:58 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:02:56 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	current = *lst;
	if (lst == NULL || del == NULL)
		return ;
	while (current != NULL)
	{
		next = current->next;
		del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*void ft_deal(void *content)
{
    free(content);
}
int main()
{
// Dealloca la lista e il suo contenuto
	t_list	*nodo1 = ft_lstnew(ft_strdup("Primo nodo"));
	t_list	*nodo2 = ft_lstnew(ft_strdup("Secondo nodo"));
	t_list	*nodo3 = ft_lstnew(ft_strdup("Terzo nodo"));

	t_list	*nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	printf("Lista prima:\n");
	t_list	*lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}

	ft_lstclear(&nuova_lista, ft_deal);

	printf("Lista dopo:\n");
	lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	return (0);
}*/
