/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/26 16:32:14 by younghoun         #+#    #+#             */
/*   Updated: 2020/12/30 15:33:54 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned	char *c_dest;
	unsigned	char *c_src;

	c_dest = dest;
	c_src = (unsigned	char*)src;
	while (n)
	{
		*c_dest = *c_src;
		if (*c_src == (unsigned char)c)
			return (++c_dest);
		c_src++;
		c_dest++;
		n--;
	}
	return (0);
}
