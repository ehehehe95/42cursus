/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:15:30 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:48:49 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		g_count;
int		g_idx;

void	print_format(t_options *options, va_list ap)
{
	if (options->type == 'c')
		g_count += print_char(options, va_arg(ap, int));
	else if (options->type == '%')
		g_count += print_char(options, '%');
	else if (options->type == 's')
		g_count += print_string(options, va_arg(ap, char*));
	else if (options->type == 'd' || options->type == 'i')
		g_count += print_decimal(options, va_arg(ap, int));
	else if (options->type == 'u')
		g_count += print_unsigned(options, (unsigned int)va_arg(ap, int));
	else if (options->type == 'x')
		g_count += print_hex(options, (unsigned int)va_arg(ap, int), 1);
	else if (options->type == 'X')
		g_count += print_hex(options, (unsigned int)va_arg(ap, int), 0);
	else if (options->type == 'p')
		g_count += print_pointer(options, va_arg(ap, unsigned long long));
	free(options);
}

void	handle_precision(const char *str, t_options *options, va_list ap)
{
	options->prec = 0;
	g_idx++;
	if (str[g_idx] == '*')
	{
		options->prec = va_arg(ap, int);
		g_idx++;
	}
	else
	{
		if (str[g_idx] == '-')
		{
			options->prec = -1;
			g_idx++;
			while (ft_isdigit(str[g_idx]))
				g_idx++;
		}
		else
			while (ft_isdigit(str[g_idx]))
				options->prec = options->prec * 10 + str[g_idx++] - '0';
	}
}

void	handle_width(const char *str, t_options *options, va_list ap)
{
	if (str[g_idx] == '*')
	{
		options->width = va_arg(ap, int);
		g_idx++;
	}
	else
		while (ft_isdigit(str[g_idx]))
			options->width = options->width * 10 + str[g_idx++] - '0';
	if (options->width < 0)
	{
		options->width = options->width * -1;
		options->minus = 1;
	}
}

void	handle_format(const char *str, va_list ap)
{
	t_options	*options;

	options = new_option();
	while (!ft_strchr(TYPE, str[g_idx]))
	{
		if (str[g_idx] == '0')
		{
			options->zero = 1;
			g_idx++;
		}
		else if (str[g_idx] == '-')
		{
			options->minus = 1;
			g_idx++;
		}
		else if (str[g_idx] == '.')
			handle_precision(str, options, ap);
		else if (ft_isdigit(str[g_idx]) || str[g_idx] == '*')
			handle_width(str, options, ap);
		else
			g_idx++;
	}
	options->type = str[g_idx++];
	print_format(options, ap);
}

int		ft_printf(const char *str, ...)
{
	va_list ap;

	va_start(ap, str);
	g_count = 0;
	g_idx = 0;
	while (str[g_idx])
	{
		if (str[g_idx] == '%')
		{
			g_idx++;
			handle_format(str, ap);
			continue ;
		}
		ft_putchar_fd(str[g_idx++], 1);
		g_count++;
	}
	va_end(ap);
	return (g_count);
}
