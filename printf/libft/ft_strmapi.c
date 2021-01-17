/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 14:57:29 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 20:42:54 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ans;
	unsigned	int	len;
	unsigned	int	idx;

	len = ft_strlen(s);
	if ((ans = malloc(len + 1)) == 0)
		return (0);
	idx = 0;
	while (idx < len)
	{
		ans[idx] = f(idx, s[idx]);
		idx++;
	}
	ans[len] = 0;
	return (ans);
}
