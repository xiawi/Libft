/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: weyap <weyap@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 21:11:39 by weyap             #+#    #+#             */
/*   Updated: 2025/05/23 21:11:39 by weyap            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*latest;

	if (!lst || !del)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (new_lst)
	{
		latest = new_lst;
		lst = lst->next;
		while (lst)
		{
			latest->next = ft_lstnew(f(lst->content));
			if (!latest->next)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			latest = latest->next;
			lst = lst->next;
		}
	}
	return (new_lst);
}
