/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: younghoun <younghoun@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 20:11:58 by younghoun         #+#    #+#             */
/*   Updated: 2021/01/08 19:24:53 by younghoun        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*prev;
	t_list	*cur;

	if (lst == 0)
		return (0);
	head = ft_lstnew(f(lst->content));
	if (head == 0)
		return (0);
	lst = lst->next;
	prev = head;
	while (lst)
	{
		cur = ft_lstnew(f(lst->content));
		if (cur == 0)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		prev->next = cur;
		prev = cur;
		lst = lst->next;
	}
	return (head);
}
