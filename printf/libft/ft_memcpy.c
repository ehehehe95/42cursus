/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 21:13:13 by younghch          #+#    #+#             */
/*   Updated: 2020/12/30 15:20:33 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*c_dest;
	const	char	*c_src;

	c_dest = dest;
	c_src = src;
	if (dest == 0 && src == 0)
		return (dest);
	while (n)
	{
		*c_dest = *c_src;
		c_src++;
		c_dest++;
		n--;
	}
	return (dest);
}
