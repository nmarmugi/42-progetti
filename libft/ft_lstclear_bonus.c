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
/*void delete_string(void *content)
{
    free(content);
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

    // Stampa della lista prima della deallocazione
    printf("Lista prima della deallocazione:\n");
    t_list *current = myList;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    // Uso di ft_lstclear per deallocare completamente la lista
    ft_lstclear(&myList, delete_string);

    // Stampa della lista dopo la deallocazione (dovrebbe essere vuota)
    printf("Lista dopo la deallocazione:\n");
    current = myList;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }

    return 0;
}*/