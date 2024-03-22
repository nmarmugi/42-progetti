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
/*void ft_print_function(void *content)
{
    printf("Contenuto: %s\n", (char *)content);
}
int main()
{
// Stampa il contenuto dei nodi appartenenti a una lista concatenata
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	ft_lstadd_back(&nuova_lista, nodo1);
	ft_lstadd_back(&nuova_lista, nodo2);
	ft_lstadd_back(&nuova_lista, nodo3);

	ft_lstiter(nuova_lista, ft_print_function);
	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
