/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 18:46:39 by younghch          #+#    #+#             */
/*   Updated: 2021/02/18 18:46:42 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ans;
	size_t	len_1;
	size_t	len_2;
	size_t	idx;

	len_1 = ft_strlen(s1);
	len_2 = ft_strlen(s2);
	idx = 0;
	ans = malloc(len_1 + len_2 + 1);
	if (ans == 0)
		return (0);
	while (idx < len_1)
	{
		ans[idx] = s1[idx];
		idx++;
	}
	while (idx < len_1 + len_2)
	{
		ans[idx] = s2[idx - len_1];
		idx++;
	}
	ans[idx] = 0;
	if (s1 != 0)
		free(s1);
	return (ans);
}

int		contains_next(char *str)
{
	while (*str)
	{
		if (*str == '\n')
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	idx;
	char	*ptr;

	idx = 0;
	len = ft_strlen(s);
	if ((ptr = malloc(len + 1)) == 0)
		return (0);
	while (idx < len)
	{
		ptr[idx] = s[idx];
		idx++;
	}
	ptr[len] = 0;
	return (ptr);
}

int		get_next_line2(char *memory, char *buffer, char **line, int fd)
{
	int result;
	int next_flag;

	next_flag = 0;
	while (!next_flag && (result = read(fd, buffer, BUFFER_SIZE)) != 0)
	{
		if (result == -1)
			return (-1);
		buffer[result] = 0;
		memory = ft_strjoin(memory, buffer);
		next_flag = contains_next(memory);
	}
	if (result == 0)
		return (handle_result(memory, line, fd));
	*line = get_start_update(memory, fd);
	free(memory);
	return (1);
}
