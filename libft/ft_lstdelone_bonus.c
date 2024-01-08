/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:50:49 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:00:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*void delete_string(void *content)
{
    free(content);
}
void print_string(void *content)
{
    printf("%s\n", (char *)content);
}
int main()
{
    // Creazione di alcuni nodi per la lista
    t_list *node1 = ft_lstnew(strdup("Primo nodo"));
    t_list *node2 = ft_lstnew(strdup("Secondo nodo"));
    t_list *node3 = ft_lstnew(strdup("Terzo nodo"));

    // Creazione di una lista vuota
    t_list *myList = NULL;

    // Aggiunta dei nodi alla lista
    ft_lstadd_back(&myList, node1);
    ft_lstadd_back(&myList, node2);
    ft_lstadd_back(&myList, node3);

    // Uso di ft_lstdelone per eliminare il secondo elemento della lista
    ft_lstdelone(node2, delete_string);

    // Uso di ft_lstiter per stampare la lista dopo l'eliminazione
    printf("Lista dopo l'eliminazione:\n");
    ft_lstiter(myList, print_string);

    // Deallocazione della memoria assegnata ai nodi e alla lista
    ft_lstclear(&myList, delete_string);

    return 0;
}*/