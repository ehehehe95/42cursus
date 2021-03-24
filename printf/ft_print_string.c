/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:04:10 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:46:52 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		handle_prec_width(t_options *options, char *str)
{
	if (options->width <= (int)ft_strlen(str))
	{
		ft_putstr_fd(str, 1);
		return (ft_strlen(str));
	}
	else
	{
		if (options->minus)
		{
			ft_putstr_fd(str, 1);
			print_blank(' ', options->width - ft_strlen(str));
		}
		else
		{
			print_blank(' ', options->width - ft_strlen(str));
			ft_putstr_fd(str, 1);
		}
		return (options->width);
	}
}

int		print_null_str(t_options *options)
{
	char	*prec_str;
	int		ans;

	if (options->prec < 6 && options->prec > -1)
	{
		prec_str = malloc(options->prec + 1);
		ft_memcpy(prec_str, "(null)", options->prec);
		prec_str[options->prec] = 0;
		ans = handle_prec_width(options, prec_str);
		free(prec_str);
		return (ans);
	}
	return (handle_prec_width(options, "(null)"));
}

int		print_string(t_options *options, char *str)
{
	char	*prec_str;
	int		ans;

	if (str == 0)
		return (print_null_str(options));
	if (options->prec == 0 || str[0] == 0)
		return (handle_prec_width(options, ""));
	if (options->prec > 0 && (int)ft_strlen(str) > options->prec)
	{
		prec_str = malloc(options->prec + 1);
		ft_memcpy(prec_str, str, options->prec);
		prec_str[options->prec] = 0;
		ans = handle_prec_width(options, prec_str);
		free(prec_str);
		return (ans);
	}
	else
		return (handle_prec_width(options, str));
}
