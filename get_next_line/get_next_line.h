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

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char *s1, char *s2);

char	*ft_strdup(const char *s);

int		contains_next(char *str);

char	*get_start_update(char *str, int fd);

void	update_residue(size_t idx, int fd, char *str);

int		handle_result(char *memory, char **line, int fd);

int		get_next_line(int fd, char **line);

int		get_next_line2(char *memory, char *buffer, char **line, int fd);

#endif
