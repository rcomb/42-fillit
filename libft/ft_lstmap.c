/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:10:36 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/28 09:51:54 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*temp;
	t_list	*new;

	temp = ft_lstnew(lst->content, lst->content_size);
	if (!lst || !f || !temp)
		return (NULL);
	temp = f(lst);
	new = temp;
	while (lst->next)
	{
		lst = lst->next;
		temp->next = ft_lstnew(lst->content, lst->content_size);
		if (!temp->next)
		{
			ft_remove_leaks(new);
			return (NULL);
		}
		temp->next = f(temp->next);
		temp = temp->next;
	}
	return (new);
}
