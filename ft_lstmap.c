/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:48:37 by dborgian          #+#    #+#             */
/*   Updated: 2023/02/03 14:50:29 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_loop_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *), t_list *new_lst)
{
	t_list	*tmp;

	tmp = new_lst;
	while (lst)
	{
		new_lst = ft_lstnew(f(lst->content));
		if (!new_lst)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&tmp, new_lst);
	}
	return (tmp);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*tmp_lst;

	if (!f || !lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	if (lst->next == NULL)
		return (new_lst);
	lst = lst->next;
	tmp_lst = ft_loop_lstmap(lst, f, del, new_lst);
	return (tmp_lst);
}
