/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:19:17 by nmarmugi          #+#    #+#             */
/*   Updated: 2023/12/20 15:19:21 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    size_t  dimensione_totale;
    void *ptr;

    ptr = malloc(dimensione_totale);
    dimensione_totale = nmemb * size;
    if (ptr != NULL)
        ft_memset(ptr, 0, dimensione_totale);
    return (ptr);
}