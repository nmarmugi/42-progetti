/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 13:44:35 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/02 14:50:12 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	carattere_in_charset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	len_st(char *str, int i, char *charset)
{
	int	j;

	j = 0;
	while (!carattere_in_charset(str[i], charset) && str[i] != '\0')
	{
		i++;
		j++;
	}
	return (j);
}

int	c_sot(char *str, char *charset)
{
	int	i;
	int	nbr_mots;

	i = 0;
	nbr_mots = 0;
	while (str[i] != '\0')
	{
		while (carattere_in_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			nbr_mots++;
			while (!carattere_in_charset(str[i], charset) && str[i] != '\0')
				i++;
		}
	}
	return (nbr_mots);
}

char	**ft_split(char const *s, char c)
{
	int		is;
	int		i;
	int		j;
	int		k;
	char	**tab;

	is = 0;
	i = 0;
	tab = malloc(sizeof(char *) * (c_sot((char *)s, (char *)&c) + 1));
	if (!(tab))
		return (NULL);
	while (i < c_sot((char *)s, (char *)&c) && s[0] != '\0')
	{
		j = 0;
		while (carattere_in_charset(s[is], (char *)&c))
			is++;
		tab[i] = malloc(sizeof(char) * (len_st((char *)s, is, (char *)&c) + 1));
		if (!(tab[i]))
		{
			k = 0;
			while (k < i)
			{
				free(tab[k]);
				k++;
			}
			free(tab);
			return (NULL);
		}
		while (!carattere_in_charset(s[is], (char *)&c) && s[is] != '\0')
			tab[i][j++] = s[is++];
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
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
