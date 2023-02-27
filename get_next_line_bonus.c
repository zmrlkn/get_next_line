/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:02:57 by zalkan            #+#    #+#             */
/*   Updated: 2023/02/27 14:03:00 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_read(int fd, char *str)
{
	int		rd;
	char	*buffer;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buffer)
		return (NULL);
	rd = 1;
	while (!ft_n(str) && rd != 0)
	{
		rd = read(fd, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			free(str);
			free(buffer);
			return (NULL);
		}
		*(buffer + rd) = '\0';
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*strs[125];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	strs[fd] = ft_read(fd, strs[fd]);
	if (!strs[fd])
		return (NULL);
	line = ft_new_line(strs[fd]);
	strs[fd] = ft_new_str(strs[fd]);
	return (line);
}
