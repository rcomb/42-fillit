/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/01 16:31:34 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/01 16:31:37 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*c1;
	char	*c2;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		c1 = (char *)haystack;
		c2 = (char *)needle;
		while (*c2 && *c1 == *c2)
		{
			c1++;
			c2++;
		}
		if (!*c2)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
