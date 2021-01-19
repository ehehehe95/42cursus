/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 13:59:35 by younghch          #+#    #+#             */
/*   Updated: 2021/01/19 15:59:54 by younghch         ###   ########.fr       */
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

#endif
