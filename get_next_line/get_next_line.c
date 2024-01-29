/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 11:52:03 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/29 11:52:36 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_add_buffer(char *buffer, int fd)
{
	char	*buffer_tmp;
	int		read_chr;

	buffer_tmp = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!buffer_tmp)
		return (NULL);
	read_chr = BUFFER_SIZE;
	while (!ft_strchr(buffer_tmp, '\n') && read_chr != 0)
	{
		read_chr = read(fd, buffer_tmp, BUFFER_SIZE);
		if (read_chr == -1)
		{
			free(buffer_tmp);
			return (NULL);
		}
		buffer = ft_strjoin(buffer, buffer_tmp, read_chr);
		if (ft_strlen(buffer) == 0)
		{
			free(buffer);
			free(buffer_tmp);
			return (NULL);
		}
	}
	free(buffer_tmp);
	return (buffer);
}

static char	*ft_next_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] != '\n' && buffer[i])
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] != '\n' && buffer[i])
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	return (line);
}

static char	*ft_new_buffer(char *buffer)
{
	char	*buffer_tmp;
	int		i;
	int		newline_buffer;

	i = 0;
	while (buffer && buffer[i] != '\n' && buffer[i])
		i++;
	if (!buffer || !buffer[i])
	{
		free(buffer);
		return (NULL);
	}
	if (buffer[i] != 0)
		newline_buffer = 1;
	else
		newline_buffer = 0;
	buffer_tmp = ft_strjoin(NULL, buffer + i + newline_buffer,
			ft_strlen(buffer) - i + !buffer[i] - 1);
	free (buffer);
	return (buffer_tmp);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*fd_buffer[10];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	fd_buffer[fd] = ft_add_buffer(fd_buffer[fd], fd);
	if (!fd_buffer[fd])
		return (NULL);
	line = ft_next_line(fd_buffer[fd]);
	fd_buffer[fd] = ft_new_buffer(fd_buffer[fd]);
	return (line);
}

// int	main()
// {
// // add_buffer: Concateno in un ciclo while,
// // tot BUFFER_SIZE iterazioni fintanto che non trovo \n o fine fd.
// // next_line: Estraggo da add_buffer la linea fino a \n o \0,
// // con memoria allocata per essa + 2 per \n e \0 e ritorno alla linea.
// // new_buffer: Creo un nuovo buffer che va da dopo il \n
// // della riga precedentemente estratta in poi.
// 	int		fd1 = open("test.txt", O_RDONLY);
// 	int		fd2 = open("test1.txt", O_RDONLY);
// 	char	*str;
// 	int		i;

// 	i = 0;
// 	while (i < 13)
// 	{
// 		str = get_next_line(fd1);
// 		printf("Linea letta del file %i: (riga %i) :%s", 1, i +1, str);
// 		free(str);
// 		str = get_next_line(fd2);
// 		printf("Linea letta del file %i: (riga %i) :%s", 2, i +1, str);
// 		free(str);
// 		i++;
// 	}
// 	close(fd1);
// 	close(fd2);
// }