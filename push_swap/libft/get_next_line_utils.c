/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:52:24 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/03/07 12:39:53 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc_gnl(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*result;

	tot_size = nmemb * size;
	result = malloc(tot_size);
	if (nmemb != 0 && tot_size / nmemb != size)
		return (NULL);
	if (size > 0)
		ft_memset(result, '\0', tot_size);
	return (result);
}

char	*ft_strchr_gnl(char *s, int c)
{
	size_t	i;
	size_t	len_s;

	i = 0;
	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	while (i <= len_s)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2, size_t size)
{
	char	*result;
	size_t	len_s1;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len_s1 = ft_strlen(s1);
	result = malloc((len_s1 + size + 1) * sizeof(char));
	if (!result)
		return (NULL);
	while (len_s1 > i && s1 && s1[i])
		result[i++] = s1[j++];
	j = 0;
	while (j < size && s2 && s2[j])
		result[i++] = s2[j++];
	result[i] = '\0';
	free(s1);
	return (result);
}
