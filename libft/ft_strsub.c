/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:05:09 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/06 16:05:10 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*sub_str;

	i = start;
	j = 0;
	if (!s || start + len > ft_strlen(s))
		return (NULL);
	sub_str = ft_strnew(len);
	if (!sub_str)
		return (NULL);
	while (len--)
		sub_str[j++] = s[i++];
	return (sub_str);
}
