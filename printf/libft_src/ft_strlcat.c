/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:26:35 by younghch          #+#    #+#             */
/*   Updated: 2021/01/08 18:54:35 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	idx;

	idx = 0;
	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	if (dlen >= size)
		return (slen + size);
	while (src[idx] != '\0' && idx + dlen + 1 < size)
	{
		dest[dlen + idx] = src[idx];
		idx++;
	}
	dest[dlen + idx] = '\0';
	return (dlen + slen);
}
