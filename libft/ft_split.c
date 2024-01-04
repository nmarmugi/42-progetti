/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:44:35 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/04 13:50:19 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_div(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

int	len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && ft_div(str[i], c) == 0)
		i++;
	return (i);
}

int	ft_size(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*s)
	{
		if (ft_div (*s, c) == 1)
			s++;
		i = len(s, c);
		s = s + i;
		if (i)
			j++;
	}
	return (j);
}

char	*my_strcpy(const char *str, int n)
{
	char	*dest;
	int		i;

	dest = malloc((n + 1) * sizeof(char));
	i = 0;
	if (!dest)
		return (0);
	while (i < n && str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		size;
	char	**dest;

	i = 0;
	j = 0;
	if (s == NULL)
		return (NULL);
	size = ft_size(s, c);
	dest = malloc((size + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	while (j < size)
	{
		while (ft_div(*s, c))
			s++;
		i = len(s, c);
		dest[j] = my_strcpy(s, i);
		s = s + i;
		j++;
	}
	dest[size] = 0;
	return (dest);
}
/*int	main()
{
	char	str[] = "Hello,world;this,is;a,test";
	
	char	**risultato = ft_split(str, ',');

	if (risultato == NULL)
	{
		fprintf(stderr, "Errore nell'allocazione di memoria\n");
		return 1;
	}

	int	i = 0;
	while (risultato[i] != NULL)
	{
		printf("%s\n", risultato[i]);
		free(risultato[i]);
		i++;
	}
	free(risultato);

	return 0;
}*/
