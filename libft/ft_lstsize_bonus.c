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
// Ci dice la lunghezza di una lista concatenata (il numero di nodi presenti)
	t_list	*nodo1 = ft_lstnew("Primo nodo");
	t_list	*nodo2 = ft_lstnew("Secondo nodo");
	t_list	*nodo3 = ft_lstnew("Terzo nodo");

	t_list *nuova_lista = NULL;

	nuova_lista = nodo1;
	nodo1->next = nodo2;
	nodo2->next = nodo3;

	int	risultato = ft_lstsize(nuova_lista);

	printf("La dimensione della lista è: %d\n", risultato);

	free(nodo1);
	free(nodo2);
	free(nodo3);
	return (0);
}*/
