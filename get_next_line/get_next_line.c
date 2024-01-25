/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:52:03 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/25 18:26:31 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_freejoin_bonus(char *str1, char *str2)
{
	char	*temp;

	temp = ft_strjoin_bonus(str1, str2);
	free(str1);
	return (temp);
}

char	*ft_sep_str_bonus(char **testo)
{
	char	*buffer;
	char	*temp;
	char	*ret;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = *testo;
	ret = NULL;
	while (temp[i] && temp[i] != '\n')
	{
		i++;
	}
	if (!temp[i])
		j = -1;
	i++;
	while (j != -1 && temp[i + j])
		j++;
	buffer = ft_substr_bonus(*testo, 0, i);
	if (j != -1)
		ret = ft_substr_bonus(*testo, i, j);
	free(temp);
	*testo = ret;
	return (buffer);
}

char	*ft_get_line_bonus(int fd, char *testo)
{
	int		bytes_read;
	char	*buffer;

	bytes_read = 1;
	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	while (bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1 || \
			(bytes_read == 0 && ft_strlen_bonus(testo) == 0))
		{
			free(testo);
			free(buffer);
			return (NULL);
		}
		buffer[bytes_read] = '\0';
		testo = ft_freejoin_bonus(testo, buffer);
		if (ft_strchr_bonus(buffer, '\n'))
			break ;
	}
	free(buffer);
	return (testo);
}

char	*get_next_line_bonus(int fd)
{
	static char	*testo[1024];
	char		*buffer;

	buffer = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(testo[fd]);
		return (NULL);
	}
	if (!testo[fd])
		testo[fd] = ft_calloc_bonus(1, 1);
	if (!testo[fd])
		return (NULL);
	testo[fd] = ft_get_line_bonus(fd, testo[fd]);
	if (!testo[fd])
		return (NULL);
	buffer = ft_sep_str_bonus(&testo[fd]);
	return (buffer);
}

// int	main()
// {
// 	int fd = open("test.txt", O_RDONLY);
// 	char *line;
// 	int	lines = 1;

// 	while (1)
// 	{
// 		line = get_next_line_bonus(fd);
// 		if (line == NULL)
// 			break ;
// 		printf("%d->%s\n", lines++, line);
// 		free(line);
// 	}
// 	close(fd);
// }