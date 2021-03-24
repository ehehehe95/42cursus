/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:27:16 by younghch          #+#    #+#             */
/*   Updated: 2021/03/24 11:45:40 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft_src/libft.h"
# include <unistd.h>
# include <stdarg.h>
# define TYPE "csdiupxX%"

typedef	struct		s_options
{
	char	minus;
	char	zero;
	int		width;
	int		prec;
	char	type;
}					t_options;
t_options			*new_option();

void				print_blank(char blank, int count);

void				print_format(t_options *options, va_list ap);

void				handle_precision(const char *str,
t_options *options, va_list ap);

void				handle_width(const char *str,
t_options *options, va_list ap);

void				handle_format(const char *str, va_list ap);

int					ft_printf(const char *str, ...);

int					print_char(t_options *options, int c);

int					print_string(t_options *options, char *str);

int					print_null_str(t_options *options);

int					handle_prec_width(t_options *options, char *str);

char				*handle_decimal_precision(t_options *options,
char *num_str, char is_minus);

int					handle_decimal_width(t_options *options, char *str);

int					print_decimal(t_options *options, int decimal);

int					print_unsigned(t_options *options, unsigned int decimal);

int					print_hex(t_options *options,
unsigned int decimal, char lower);

int					print_pointer(t_options *options,
unsigned long long decimal);
#endif
