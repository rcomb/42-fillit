/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/31 16:37:06 by vnugroho          #+#    #+#             */
/*   Updated: 2018/10/31 16:37:07 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && dstsize > i)
		i++;
	while (src[j] && dstsize > i + j + 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (dstsize > i)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
