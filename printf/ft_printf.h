/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:59:35 by younghch          #+#    #+#             */
/*   Updated: 2021/01/20 16:09:02 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

# define TYPE "csdiupxX%"

typedef	struct		s_options
{
	char	minus;
	char	zero;
	int		width;
	int		prec;
	char	type;
}					t_options;
t_options	*new_option();
int		ft_printf(const char *str, ...);
void	handle_format(const char *str);
void	handle_width_prec(const char *str, t_options *options);
void	print_format(t_options *options);
int		print_char(t_options *options, int c);
int		print_string(t_options *options, va_list ap);
int		print_pointer(t_options *options, va_list ap);
int		print_decimal(t_options *options, va_list ap);
#endif
