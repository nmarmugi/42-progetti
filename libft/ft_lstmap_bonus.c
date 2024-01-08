/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:19:35 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:05:59 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*current;
	t_list	*new_node;
	void	*new_content;

	newlist = NULL;
	current = lst;
	if (lst == NULL || f == NULL)
		return (NULL);
	while (current != NULL)
	{
		new_content = f(current->content);
		new_node = ft_lstnew(new_content);
		ft_lstadd_back(&newlist, new_node);
		current = current->next;
		if (new_node == NULL)
		{
			ft_lstclear(&newlist, del);
			free(new_content);
			return (NULL);
		}
	}
	return (newlist);
}
/*void *example_function(void *content)
{
    // Esempio: duplicare una stringa
    char *original = (char *)content;
    char *duplicate = strdup(original);
    return (void *)duplicate;
}

int main()
{
    // Creazione di una lista di esempio
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    // Collegamento dei nodi per formare una lista concatenata
    node1->next = node2;
    node2->next = node3;

    t_list *newList = ft_lstmap(node1, example_function, free);

    // Stampa della nuova lista
    printf("Nuova lista:\n");
    t_list *current = newList;
    while (current != NULL)
    {
        printf("%s\n", (char *)current->content);
        current = current->next;
    }
}*/