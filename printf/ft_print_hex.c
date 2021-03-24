/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:15:29 by younghch          #+#    #+#             */
/*   Updated: 2021/03/23 14:08:07 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_itohex(unsigned int u, char lower)
{
	int				len;
	char			*hex;
	char			*ans;
	unsigned int	copy;

	hex = "0123456789ABCDEF";
	if (lower)
		hex = "0123456789abcdef";
	len = 0;
	copy = u;
	if (u == 0)
		len = 1;
	while (copy != 0)
	{
		copy = copy / 16;
		len++;
	}
	ans = malloc(len + 1);
	ans[len--] = 0;
	while (len >= 0)
	{
		ans[len--] = hex[u % 16];
		u = u / 16;
	}
	return (ans);
}

int		print_hex(t_options *options, unsigned int decimal, char lower)
{
	char	*dec_str;
	char	*prec_str;
	int		len;
	int		ans;

	if (decimal == 0 && options->prec == 0)
		return (handle_decimal_width(options, ""));
	dec_str = ft_itohex(decimal, lower);
	len = (int)ft_strlen(dec_str);
	if (options->prec > 0 && options->prec > len)
	{
		prec_str = handle_decimal_precision(options, dec_str, 0);
		ans = handle_decimal_width(options, prec_str);
		free(prec_str);
	}
	else
		ans = handle_decimal_width(options, dec_str);
	free(dec_str);
	return (ans);
}
