/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:08:32 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/06 16:08:34 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = (t_list *)ft_memalloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (content == NULL)
	{
		content_size = 0;
		new->content = NULL;
	}
	else
	{
		new->content = ft_memalloc(content_size);
		if (new->content == NULL)
		{
			free(new);
			return (NULL);
		}
		ft_memcpy(new->content, content, content_size);
	}
	new->content_size = content_size;
	new->next = NULL;
	return (new);
}
