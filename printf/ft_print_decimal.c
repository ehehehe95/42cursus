/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 15:15:29 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:59:48 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*handle_decimal_precision(t_options *options,
char *num_str, char is_minus)
{
	int		idx;
	int		len;
	char	*prec_str;

	len = (int)ft_strlen(num_str);
	prec_str = malloc(options->prec + is_minus);
	idx = 0;
	if (is_minus == 1)
	{
		prec_str[idx++] = '-';
		len--;
	}
	while (idx < options->prec - len + is_minus)
		prec_str[idx++] = '0';
	ft_memcpy(prec_str + idx, num_str + is_minus, len + 1);
	return (prec_str);
}

int		check_minus(char sign)
{
	if (sign == '-')
	{
		ft_putchar_fd('-', 1);
		return (1);
	}
	return (0);
}

int		handle_decimal_width(t_options *options, char *str)
{
	int		is_minus;
	int		blank;

	blank = ' ';
	is_minus = 0;
	if (options->width <= (int)ft_strlen(str))
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	if (options->minus)
	{
		ft_putstr_fd(str, 1);
		print_blank(blank, options->width - ft_strlen(str));
		return (options->width);
	}
	if (options->zero && options->prec < 0)
	{
		blank = '0';
		is_minus = check_minus(str[0]);
	}
	print_blank(blank, options->width - ft_strlen(str));
	ft_putstr_fd(str + is_minus, 1);
	return (options->width);
}

int		print_decimal(t_options *options, int decimal)
{
	char	*dec_str;
	char	*prec_str;
	char	is_minus;
	int		len;
	int		ans;

	if (decimal == 0 && options->prec == 0)
		return (handle_decimal_width(options, ""));
	dec_str = ft_itoa(decimal);
	len = (int)ft_strlen(dec_str);
	is_minus = 0;
	if (dec_str[0] == '-')
		is_minus = 1;
	if (options->prec > 0 && options->prec > len - is_minus)
	{
		prec_str = handle_decimal_precision(options, dec_str, is_minus);
		ans = handle_decimal_width(options, prec_str);
		free(prec_str);
	}
	else
		ans = handle_decimal_width(options, dec_str);
	free(dec_str);
	return (ans);
}
