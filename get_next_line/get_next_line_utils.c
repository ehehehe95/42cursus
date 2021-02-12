/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:42:30 by younghch          #+#    #+#             */
/*   Updated: 2021/01/28 08:42:33 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
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