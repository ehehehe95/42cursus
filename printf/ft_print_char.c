/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 14:20:28 by younghch          #+#    #+#             */
/*   Updated: 2021/02/28 19:09:00 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		print_char(t_options *options, int c)
{
	int		idx;
	char	blank;

	blank = ' ';
	if (options->width == 0)
	{
		ft_putchar_fd(c, 1);
		return (1);
	}
	idx = 0;
	if (options->minus == 1)
	{
		ft_putchar_fd(c, 1);
		while (++idx < options->width)
			ft_putchar_fd(blank, 1);
	}
	else
	{
		if (options->type == '%' && options->zero)
			blank = '0';
		while (++idx < options->width)
			ft_putchar_fd(blank, 1);
		ft_putchar_fd(c, 1);
	}
	return (idx);
}
