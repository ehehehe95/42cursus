/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:15:29 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:46:42 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_unsinged_itoa(unsigned int u)
{
	int				len;
	char			*ans;
	unsigned int	copy;

	len = 0;
	copy = u;
	if (u == 0)
		len = 1;
	while (copy != 0)
	{
		copy = copy / 10;
		len++;
	}
	ans = malloc(len + 1);
	ans[len--] = 0;
	while (len >= 0)
	{
		ans[len--] = u % 10 + '0';
		u = u / 10;
	}
	return (ans);
}

int		print_unsigned(t_options *options, unsigned int decimal)
{
	char	*dec_str;
	char	*prec_str;
	int		len;
	int		ans;

	if (decimal == 0 && options->prec == 0)
		return (handle_decimal_width(options, ""));
	dec_str = ft_unsinged_itoa(decimal);
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
