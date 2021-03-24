/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:15:29 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:34:26 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_longtohex(unsigned long long u, t_options *options)
{
	int					len;
	char				*hex;
	char				*ans;
	unsigned long long	copy;

	hex = "0123456789abcdef";
	len = 2;
	copy = u;
	if (u == 0 && options->prec == -1)
		len = 3;
	while (copy != 0)
	{
		copy = copy / 16;
		len++;
	}
	ans = malloc(len + 1);
	ans[len--] = 0;
	while (len >= 2)
	{
		ans[len--] = hex[u % 16];
		u = u / 16;
	}
	ans[0] = '0';
	ans[1] = 'x';
	return (ans);
}

int		print_pointer(t_options *options, unsigned long long decimal)
{
	char	*dec_str;
	int		len;
	int		ans;

	dec_str = ft_longtohex(decimal, options);
	len = (int)ft_strlen(dec_str);
	ans = handle_decimal_width(options, dec_str);
	free(dec_str);
	return (ans);
}
