/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:35:30 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 16:47:03 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main()
{
    // Creazione di alcuni nodi per la lista
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));

    // Inizializzazione dei nodi con valori di esempio
    node1->content = "Primo nodo";
    node1->next = NULL;

    node2->content = "Secondo nodo";
    node2->next = NULL;

    node3->content = "Terzo nodo";
    node3->next = NULL;

    // Creazione di una lista vuota
    t_list *myList = NULL;

    // Aggiunta dei nodi alla lista
    ft_lstadd_back(&myList, node1);
    ft_lstadd_back(&myList, node2);
    ft_lstadd_back(&myList, node3);

    // Uso di ft_lstlast per ottenere l'ultimo elemento della lista
    t_list *lastNode = ft_lstlast(myList);

    // Stampa del contenuto dell'ultimo nodo
    if (lastNode != NULL)
        printf("Contenuto dell'ultimo nodo: %s\n", (char *)lastNode->content);
    else
        printf("La lista è vuota.\n");

    // Deallocazione della memoria assegnata ai nodi e alla lista
    ft_lstclear(&myList, free);

    return 0;
}*/