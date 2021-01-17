/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/23 20:58:18 by younghch          #+#    #+#             */
/*   Updated: 2020/12/26 16:43:26 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *mem, int c, size_t n)
{
	char	*temp;

	temp = mem;
	while (n)
	{
		*temp++ = c;
		n--;
	}
	return (mem);
}
