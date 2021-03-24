/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/31 16:42:30 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 14:34:14 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	fill_array(int n, char *ans, size_t len)
{
	size_t			idx;
	unsigned	int	temp;

	idx = 1;
	if (n == 0)
		ans[0] = '0';
	else
	{
		temp = n;
		if (n < 0)
		{
			ans[0] = '-';
			temp = n * -1;
		}
		while (temp != 0)
		{
			ans[len - idx++] = temp % 10 + '0';
			temp = temp / 10;
		}
	}
	ans[len] = 0;
}

char			*ft_itoa(int n)
{
	unsigned	int	temp;
	char			*ans;
	size_t			len;

	len = 0;
	temp = n;
	if (n < 0)
	{
		len++;
		temp = n * -1;
	}
	if (n == 0)
		len = 1;
	else
	{
		while (temp != 0)
		{
			temp = temp / 10;
			len++;
		}
	}
	ans = malloc(len + 1);
	if (ans != 0)
		fill_array(n, ans, len);
	return (ans);
}
