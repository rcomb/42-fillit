/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:06:06 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/30 19:10:27 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_get_next_word(char const *s, char delim, char **arr, \
				size_t i)
{
	size_t	delim_count;
	size_t	len;

	delim_count = 0;
	len = 0;
	while (*s && *s == delim)
	{
		delim_count++;
		s++;
	}
	while (s[len] && s[len] != delim)
		len++;
	if (len > 0)
	{
		arr[i] = ft_strnew(len);
		ft_strncpy(arr[i], s, len);
	}
	return (delim_count + len);
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	word_count;
	char	**final;

	if (!s)
		return (NULL);
	i = 0;
	word_count = ft_wordcount_delim(s, c);
	final = (char **)ft_memalloc((word_count + 1) * sizeof(char *));
	if (!final)
		return (NULL);
	while (*s)
	{
		len = ft_get_next_word(s, c, final, i);
		s += len;
		i++;
	}
	return (final);
}
