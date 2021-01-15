/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 14:58:31 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/05 20:49:32 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char *ans;
	char *temp;

	ans = 0;
	temp = (char*)s;
	while (*temp)
	{
		if (*temp == c)
			ans = temp;
		temp++;
	}
	if (c == 0)
		return (temp);
	return (ans);
}
