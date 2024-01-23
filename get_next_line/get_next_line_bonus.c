/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmarmugi <nmarmugi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:23:33 by nmarmugi          #+#    #+#             */
/*   Updated: 2024/01/23 16:26:41 by nmarmugi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static char	*ft_add_buffer(char *buffer, int fd)
{
	char	*new_buffer;
	int		read_buffer_size;

	new_buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	if (!new_buffer)
		return (NULL);
	read_buffer_size = BUFFER_SIZE;
	while (!ft_strchr(new_buffer, '\n') && read_buffer_size != 0)
	{
		read_buffer_size = read(fd, new_buffer, BUFFER_SIZE);
		if (read_buffer_size == -1)
		{
			free(new_buffer);
			return (NULL);
		}
		buffer = ft_strjoin(buffer, new_buffer);
		if (ft_strlen(buffer) == 0)
		{
			free(buffer);
			free(new_buffer);
			return (NULL);
		}
	}
	free(new_buffer);
	return (buffer);
}

static char	*ft_cpy_next_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*ft_new_buffer(char **buffer)
{
	char	*new_buffer;
	int		i;

	i = 0;
	while (*buffer && (*buffer)[i] != '\n' && (*buffer)[i])
		i++;
	if (!*buffer || !(*buffer)[i])
	{
		free(*buffer);
		return (NULL);
	}
	new_buffer = ft_strjoin(NULL, *buffer + i + ((*buffer)[i] != '\0'));
	free(*buffer);
	*buffer = new_buffer;
	return (new_buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*fd_buffer[4096];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	fd_buffer[fd] = ft_add_buffer(fd_buffer[fd], fd);
	if (!fd_buffer[fd])
		return (NULL);
	line = ft_cpy_next_line(fd_buffer[fd]);
	fd_buffer[fd] = ft_new_buffer(&fd_buffer[fd]);
	return (line);
}

// int	main(void)
// {
// 	int fd = open("empty", O_RDONLY);
// 	char *str = get_next_line(fd);
// 	printf("%s", str);
// 	for(int i = 0; i < 2; i++){
// 		free(str);
// 		str = get_next_line(fd);
// 		printf("%s", str);
// 	}
// 	free(str);
// 	return (0);
// }