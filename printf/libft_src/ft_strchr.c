/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 17:25:20 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 16:44:38 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *temp;

	temp = (char*)s;
	while (*temp)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	if (c == 0)
		return (temp);
	return (0);
}
