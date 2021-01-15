/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 16:36:35 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 20:41:41 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*c_dest;
	char	*c_src;

	c_dest = dest;
	c_src = (char*)src;
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	if (c_src < c_dest)
	{
		while (n)
		{
			n--;
			c_dest[n] = c_src[n];
		}
	}
	else
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	return (dest);
}
