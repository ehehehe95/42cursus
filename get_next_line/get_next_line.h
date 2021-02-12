/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghch <younghch@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 08:42:18 by younghch          #+#    #+#             */
/*   Updated: 2021/01/28 08:42:20 by younghch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
# include <stdlib.h>
# include <unistd.h>

int		find_next_chr(char  *str);

int		ft_strlen(char *str);

char	*ft_strjoin(char *s1, char *s2, int size);

char	*ft_strdup(char *s, int loc);

int		get_next_line(int fd, char **line);
#endif
