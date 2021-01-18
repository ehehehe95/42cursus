/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:50:49 by younghch          #+#    #+#             */
/*   Updated: 2021/01/18 15:37:54 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

const	char	*g_str;
va_list			p_arg;

int		get_arg_num(const char * format)
{
	int flag;
	int count;

	count  = 0;
	flag = 0;
	while (*format)
	{
		if (flag && *format == '%')
			flag = 0;
		else if (*format == '%')
			flag = 1;
		else if (flag)
		{
			count++;
			flag = 0;
		}
		format++;
	}
	return (count);
}

void	handle_format()
{
	t_options *options;

	options = ft_newoption();
	g_str++;
	while (*g_str != '-' && *g_str != '0')
	{
		if(*g_str == '-')
			options->minus = 1;
		else
			options->zero = 1;
		g_str++;
	}
	
}

int		ft_printf(const char *str, ...)
{
	int			n_arg;
	int			count;

	g_str = str;
	n_arg = get_arg_num(g_str);
	va_start(p_arg, n_arg);
	count = 0;
	while (*g_str)
	{
		if (*g_str == '%')
		{
			handle_format();
			continue ;
		}
		ft_putchar_fd(*g_str++, 1);
		count++;
	}

	return (0);
}