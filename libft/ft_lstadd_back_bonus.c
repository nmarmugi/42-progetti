/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:43:36 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 16:20:21 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	last = *lst;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}
/*int	main()
{
// Aggiunge un nuovo nodo alla fine di una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");
	
	t_list	*nuova_lista = NULL;
	
	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	printf("Lista prima dell'aggiunta:\n");
	
	t_list	*lista = nuova_lista;
	
	while (lista != NULL)
	{
		printf("%s\n", (char *)lista->content);
		lista = lista->next;
	}
	
	ft_lstadd_back(&nuova_lista, nodo3);
	
	printf("Lista dopo l'aggiunta alla fine:\n");
	
	while (nuova_lista != NULL)
	{
		printf("%s\n", (char *)nuova_lista->content);
		nuova_lista = nuova_lista->next;
	}
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
