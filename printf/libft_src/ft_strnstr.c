/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 15:04:49 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 20:46:09 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	f_len;
	size_t	no_use;

	no_use = ft_strlen(s);
	no_use++;
	if (*find == 0)
		return ((char*)s);
	f_len = ft_strlen(find);
	while (f_len <= slen)
	{
		if (ft_strncmp(s, find, f_len) == 0)
			return ((char*)s);
		s++;
		slen--;
	}
	return (0);
}
