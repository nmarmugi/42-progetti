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
 	char str3[] = "hgjhgjhg";
 	char str[] = " ciao sono Paola";
 	t_list *i = ft_lstnew(str3);
 	t_list *j = ft_lstnew(str);
 	t_list *str2 = NULL; //perche' e' l'inizio
 	ft_lstadd_back (&str2, i);
 	ft_lstadd_back (&str2, j);
 	printf("%s", (char *)str2->content);
 	printf("%s\n", (char *)str2->next->content);
 	return(0);
}*/