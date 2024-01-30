/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:22:43 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/30 10:50:38 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static void	*ft_memset(void *s, int c, size_t n)
{
	char	*result;
	size_t	i;

	i = 0;
	result = (char *)s;
	while (i < n)
	{
		result[i] = c;
		i++;
	}
	return (result);
}

void	*ft_calloc(size_t nmemb, size_t size)
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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s && s[i])
		i++;
	return (i);
}

char	*ft_strchr(char *s, int c)
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

char	*ft_strjoin(char *s1, char *s2, size_t size)
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
