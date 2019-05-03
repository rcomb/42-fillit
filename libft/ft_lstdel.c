/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:09:43 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/28 09:49:24 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*ptr;

	if (!*alst || !del)
		return ;
	while (*alst)
	{
		ptr = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = ptr;
	}
}
