/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/30 16:50:25 by younghoun         #+#    #+#             */
/*   Updated: 2020/12/30 16:56:07 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	idx;
	char	*ptr;

	idx = 0;
	len = ft_strlen(s);
	ptr = malloc(len + 1);
	if (ptr == 0)
		return (0);
	while (idx <= len)
	{
		ptr[idx] = s[idx];
		idx++;
	}
	return (ptr);
}
