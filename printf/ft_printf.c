/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:50:49 by younghch          #+#    #+#             */
/*   Updated: 2021/01/19 15:59:37 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

va_list			g_ap;
int				g_count;
int				g_idx;

void	handle_width_prec(const char *str, t_options *options)
{
	if (options->prec == 0)
	{
		if (str[g_idx] == '*')
			options->prec = va_arg(g_ap, int);
		else
		{
			while (ft_isdigit(str[g_idx]))
				options->prec = options->prec * 10 + str[g_idx++] - '0';
			g_idx--;
		}
	}
	else
	{
		if (str[g_idx] == '*')
			options->width = va_arg(g_ap, int);
		else
		{
			while (ft_isdigit(str[g_idx]))
				options->width = options->width * 10 + str[g_idx++] - '0';
			g_idx--;
		}
	}
}

void	handle_format(const char *str)
{
	t_options	*options;

	options = new_option();
	while(!ft_strchr(TYPE, str[g_idx]) && str[g_idx] != '%')
	{
		if (str[g_idx] == '0')
			options->zero = 1;
		else if (str[g_idx] == '-')
			options->minus = 1;
		else if (str[g_idx] == '.')
			options->prec = 0;
		else if (ft_isdigit(str[g_idx]) || str[g_idx] == '*')
			handle_width_prec(str, options);
		g_idx++; 
	}
	options->type = str[g_idx];
	print_format(options, g_ap);
}

int		ft_printf(const char *str, ...)
{
	int			n_arg;

	g_count = 0;
	g_idx = 0;
	va_start(g_ap, str);
	while (str[g_idx])
	{
		if (str[g_idx] == '%')
		{
			g_idx++;
			handle_format(str);
			continue ;
		}
		ft_putchar_fd(str[g_idx++], 1);
		g_count++;
	}
	return (g_count);
}
