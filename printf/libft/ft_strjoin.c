/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 15:12:11 by younghoun         #+#    #+#             */
/*   Updated: 2020/12/31 15:19:36 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
