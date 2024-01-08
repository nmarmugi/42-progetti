/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:21:38 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:05:27 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
{
    // Creazione di alcuni nodi per la lista
    t_list *node1 = ft_lstnew("Primo nodo");
    t_list *node2 = ft_lstnew("Secondo nodo");
    t_list *node3 = ft_lstnew("Terzo nodo");

    // Creazione di una lista vuota
    t_list *myList = NULL;

    // Aggiunta dei nodi alla lista (in ordine inverso)
    ft_lstadd_front(&myList, node3);
    ft_lstadd_front(&myList, node2);
    ft_lstadd_front(&myList, node1);

    // Stampa della lista
    printf("Lista dopo l'aggiunta alla testa:\n");
    t_list *current = myList;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Deallocazione della memoria assegnata ai nodi e alla lista
    ft_lstclear(&myList, free);

    return 0;
}*/