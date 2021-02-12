/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:42:07 by younghch          #+#    #+#             */
/*   Updated: 2021/01/28 08:42:09 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <limits.h>

static	char	*residues[OPEN_MAX];

char	*get_start_update(char *str, int fd)
{
	char	*start;
	int		len;
	int		idx;

	idx = -1;
	len = 0;
	while (str[len] != '\n' && str[len])
		len++;
	start = malloc(len);
	while (idx++ < len)
		start[idx] = str[idx];
	start[idx] = 0;
	update_residue(idx, len);
	return (start);
}

void	update_residue(int idx, int len)
{
	char	*temp;

	if (len == idx)
	{
		free(residues[fd]);
		return ;
	}
	temp = residues[fd];
	residues[fd] = ft_strdup(temp + idx);
	free(temp);
}

int		get_next_line(int fd, char **line)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*memory;
	int		next_flag;
	int		result;

	memory = 0;
	if (fd < 0 || line == 0 || BUFFER_SIZE <= 0)
		return (-1);
	if (residues[fd] != 0)
	{
		memory = get_start(residues[fd]);
		if (contain_next(residues[fd]))
		{
			update_residue(residues[fd]);
			*line = memory;
		}
	}
	next_flag = 0;
	while (!next_flag && (result = read(fd, buffer, BUFFER_SIZE)) != 0)
	{
		if (result == -1)
			return (-1);
		buffer[result] = 0;
		ft_strjoin(memory, result);
		next_flag = contains_next(memory);
	}
	*line = get_start(memory);
	update_residue(memory);
	return (1)
}
