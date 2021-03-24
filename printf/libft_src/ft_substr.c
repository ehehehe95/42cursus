/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 15:00:37 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 20:42:20 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	idx;
	char	*ans;

	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	idx = 0;
	ans = malloc(len + 1);
	if (ans == 0)
		return (0);
	while (idx < len)
	{
		ans[idx] = s[start + idx];
		if (s[start + idx] == 0)
			return (ans);
		idx++;
	}
	ans[idx] = 0;
	return (ans);
}
