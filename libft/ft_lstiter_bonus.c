/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:09:25 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:06:16 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL || f == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*void example_function(void *content)
{
    printf("Elemento: %s\n", (char *)content);
}

int main()
{
    // Creazione di alcuni nodi per la lista
    t_list *node1 = ft_lstnew("Primo nodo");
    t_list *node2 = ft_lstnew("Secondo nodo");
    t_list *node3 = ft_lstnew("Terzo nodo");

    // Creazione di una lista vuota
    t_list *myList = NULL;

    // Aggiunta dei nodi alla lista
    ft_lstadd_back(&myList, node1);
    ft_lstadd_back(&myList, node2);
    ft_lstadd_back(&myList, node3);

    ft_lstiter(myList, example_function);

    // Deallocazione della memoria assegnata ai nodi e alla lista
    ft_lstclear(&myList, free);

    return 0;
}*/