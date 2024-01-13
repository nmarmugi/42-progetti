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
/*void	*ft_mappa_function(void *content)
{
	char	*original = (char *)content;
	char	*duplicate = ft_strdup(original);
	return ((void *)duplicate);
}
void	ft_deal(void *content)
{
	free(content);
}
int main()
{
// Crea una nuova lista basata sull'originale e la dealloca
	t_list	*nodo1 = ft_lstnew("Ciao");
	t_list	*nodo2 = ft_lstnew("mamma");
	t_list	*nodo3 = ft_lstnew("!");
	
	t_list	*nuova_lista = NULL;
	
	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);
	
	nuova_lista = ft_lstmap(nodo1, ft_mappa_function, ft_deal);
	
	printf("Nuova lista:\n");
	t_list	*lista = nuova_lista;
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	ft_lstclear(&nuova_lista, ft_deal);
	free(nodo1);
	free(nodo2);
	free(nodo3);
}*/
