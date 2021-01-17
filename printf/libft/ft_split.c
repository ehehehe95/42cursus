/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 10:24:24 by younghch          #+#    #+#             */
/*   Updated: 2021/01/09 17:36:10 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		get_length(const	char *str, char c)
{
	int		idx;
	int		len;
	int		flag;

	len = 0;
	idx = 0;
	flag = 1;
	while (str[idx])
	{
		if (str[idx++] == c)
		{
			flag = 1;
			continue ;
		}
		if (flag)
		{
			flag = 0;
			len++;
		}
	}
	return (len);
}

static	int		get_start_end(const	char *str, char c, int idx, int flag)
{
	if (flag == 0)
	{
		while (str[idx] == c)
			idx++;
		if (str[idx] == 0)
			return (-1);
		return (idx);
	}
	else
	{
		while ((str[idx] != c) && str[idx])
			idx++;
		return (idx);
	}
}

char			**free_all(char **ans, int j)
{
	int		i;

	i = 0;
	while (i < j)
	{
		free(ans[i]);
		i++;
	}
	free(ans);
	return (0);
}

char			**ft_split(char const *str, char c)
{
	char	**ans;
	int		s_idx;
	int		idx;
	int		j;

	j = 0;
	if (str == 0)
		return (0);
	if ((ans = malloc(sizeof(char*) * (get_length(str, c) + 1))) == 0)
		return (0);
	s_idx = get_start_end(str, c, 0, 0);
	while (s_idx != -1)
	{
		idx = get_start_end(str, c, s_idx, 1);
		if ((ans[j] = malloc(idx - s_idx + 1)) == 0)
			return (free_all(ans, j));
		ft_memcpy(ans[j], str + s_idx, idx - s_idx);
		ans[j][idx - s_idx] = 0;
		s_idx = get_start_end(str, c, idx, 0);
		j++;
	}
	ans[j] = 0;
	return (ans);
}
