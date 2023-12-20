/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:01:14 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 15:01:19 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;

    j = 0;
    i = 0;
    while (little[i] != '\0')
        i++;
    while (big[j] != '\0' && len-- >= i)
    {
        if (big[j] == little[i] && ft_memcmp(big, little, i) == 0)
            return (char *)big;
        j++;
    }
    return (NULL);
}
