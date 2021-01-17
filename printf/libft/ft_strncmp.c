/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 21:25:24 by younghch          #+#    #+#             */
/*   Updated: 2020/12/28 15:34:47 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				idx;
	unsigned	char	c1;
	unsigned	char	c2;

	idx = 0;
	while ((s1[idx] != '\0' || s2[idx] != '\0') && idx < n)
	{
		c1 = (unsigned char)s1[idx];
		c2 = (unsigned char)s2[idx];
		if (c1 != c2)
			return (c1 - c2);
		idx++;
	}
	return (0);
}
