/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:07:33 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 12:20:40 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nuovo_nodo;

	nuovo_nodo = (t_list *)malloc(sizeof(t_list));
	if (nuovo_nodo == NULL)
		return (NULL);
	nuovo_nodo->content = content;
	nuovo_nodo->next = NULL;
	return (nuovo_nodo);
}
