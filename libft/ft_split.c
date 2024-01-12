/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:44:35 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/08 13:22:14 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	return (i);
}

static int	ft_size(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || !s[i + 1]))
			words++;
		i++;
	}
	return (words);
}

static char	**ft_my_free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	*s_cpy;
	char	**dest;

	j = 0;
	s_cpy = (char *)s;
	if (s == NULL)
		return (NULL);
	dest = malloc((ft_size(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (j < ft_size(s, c) && s_cpy)
	{
		while (*s_cpy == c)
			s_cpy++;
		dest[j] = malloc((ft_len(s_cpy, c) + 1) * sizeof(char));
		if (!dest[j])
			return (ft_my_free_split(dest));
		ft_strlcpy(dest[j], s_cpy, ft_len(s_cpy, c) + 1);
		s_cpy += ft_len(s_cpy, c) + 1;
		j++;
	}
	dest[j] = NULL;
	return (dest);
}
/*int	main()
{
// Divide una stringa passata, in più stringhe, allocando memoria per esse
// La divide grazie a un char passato
	char	str[] = "Ciao,mamma;guarda,come;mi,diverto";
	char	**risultato = ft_split(str, ',');
	int	i = 0;
	while (risultato[i] != NULL)
	{
		printf("%s\n", risultato[i]);
		free(risultato[i]);
		i++;
	}
	free(risultato);
	return (0);
}*/
