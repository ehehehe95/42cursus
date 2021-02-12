/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:29:09 by younghch          #+#    #+#             */
/*   Updated: 2021/01/19 16:01:16 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_options	*new_option()
{
	t_options	*new;

	new = malloc(sizeof(t_options));
	new->minus = 0;
	new->zero = 0;
	new->prec = -1;
	new->width = -1;
	new->type = 0;
	return (new);
}

t_options
