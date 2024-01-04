/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:19:35 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 12:22:18 by nmarmugi         ###   ########.fr       */
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
		new_node = (t_list *)malloc(sizeof(t_list));
		if (new_node == NULL)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		new_node->content = new_content;
		new_node->next = NULL;
		ft_lstadd_back(&newlist, new_node);
		current = current->next;
	}
	return (newlist);
}
