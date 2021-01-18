/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newoption.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:29:09 by younghch          #+#    #+#             */
/*   Updated: 2021/01/18 15:39:04 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_options	*ft_newoption()
{
	t_options	*new;

	new = malloc(sizeof(t_options));
	new->minus = 0;
	new->zero = 0;
	new->precision = 0;
	new->width = 0;
	new->type = 0;
	return (new);
}
