/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 15:50:49 by younghch          #+#    #+#             */
/*   Updated: 2021/01/17 15:01:14 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

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

int		ft_printf(const char *format, ...)
{
	va_list		p_arg;
	int			n_arg;

	n_arg = get_arg_num(format);
	va_start(p_arg, n_arg);
	
	return (0);
}