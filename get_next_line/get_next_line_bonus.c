/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:46:27 by younghch          #+#    #+#             */
/*   Updated: 2021/02/18 18:46:30 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static	char	*g_residues[OPEN_MAX] = {0};

char	*get_start_update(char *str, int fd)
{
	char	*start;
	int		len;
	int		idx;

	idx = -1;
	len = 0;
	if (str == 0)
		return (ft_strdup(""));
	while (str[len] != '\n' && str[len])
		len++;
	start = malloc(len + 1);
	while (++idx < len)
		start[idx] = str[idx];
	start[idx] = 0;
	update_residue(idx, fd, str);
	return (start);
}

void	update_residue(size_t idx, int fd, char *str)
{
	char	*temp;

	temp = g_residues[fd];
	if (ft_strlen(str) == idx)
		g_residues[fd] = 0;
	else if (str != 0)
		g_residues[fd] = ft_strdup(str + idx + 1);
	if (temp != 0)
		free(temp);
}

int		handle_result(char *memory, char **line, int fd)
{
	char *temp;

	if (g_residues[fd] != 0)
		free(g_residues[fd]);
	if (memory == 0)
	{
		*line = ft_strdup("");
		return (0);
	}
	if (contains_next(memory))
	{
		temp = get_start_update(memory, fd);
		free(memory);
		*line = temp;
		return (1);
	}
	g_residues[fd] = 0;
	*line = memory;
	return (0);
}

int		get_next_line(int fd, char **line)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*memory;

	memory = 0;
	if (fd < 0 || line == 0 || BUFFER_SIZE <= 0)
		return (-1);
	if (g_residues[fd] != 0)
	{
		if (contains_next(g_residues[fd]))
		{
			*line = get_start_update(g_residues[fd], fd);
			return (1);
		}
		memory = get_start_update(g_residues[fd], fd);
	}
	return (get_next_line2(memory, buffer, line, fd));
}
