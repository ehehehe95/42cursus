/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:31:34 by younghch          #+#    #+#             */
/*   Updated: 2021/02/28 20:09:39 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_blank(char blank, int count)
{
	int i;

	i = -1;
	while (++i < count)
		ft_putchar_fd(blank, 1);
}
