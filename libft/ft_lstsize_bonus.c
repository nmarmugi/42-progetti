/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:29:45 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 16:29:51 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
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
    myList = node1;
    node1->next = node2;
    node2->next = node3;

    // Uso di ft_lstsize per ottenere la dimensione della lista
    int size = ft_lstsize(myList);

    // Stampa della dimensione della lista
    printf("La dimensione della lista è: %d\n", size);

    // Deallocazione della memoria assegnata ai nodi
    free(node1);
    free(node2);
    free(node3);

    return 0;
}*/