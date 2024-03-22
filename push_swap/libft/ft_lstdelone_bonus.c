/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 10:50:49 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 17:00:09 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->content);
	free(lst);
}
/*void	ft_deal(void *content)
{
	free(content);
}
int main()
{
// Cancella un nodo nella lista
	char	*str = (char *)malloc(sizeof(char) * 2);
	if (str == NULL)
		return (1);
	str[0] = 'a';
	str[1] = '\0';
	t_list	*nodo = ft_lstnew(str);

	if (nodo == NULL)
	{
		free(nodo);
		return (1);
	}
	printf("%s\n", (char *)nodo->content);
	ft_lstdelone(nodo, ft_deal);
	return (0);
}*/
