/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:16:49 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/01 16:16:52 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*ptr;

	i = ft_strlen(s);
	ptr = (char *)s + i;
	while (s[i] != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
		ptr--;
	}
	return (ptr);
}
