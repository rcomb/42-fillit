/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:05:47 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/06 16:05:48 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	i = 0;
	while (ft_isspace(s[start]))
		start++;
	while (ft_isspace(s[end - 1]))
		end--;
	if (end < start)
		end = start;
	new_str = ft_strnew(end - start);
	if (!new_str)
		return (NULL);
	while (end - start > 0)
		new_str[i++] = s[start++];
	new_str[i] = '\0';
	return (new_str);
}
