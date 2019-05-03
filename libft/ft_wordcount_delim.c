/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount_delim.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 12:20:11 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/27 12:23:13 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount_delim(char const *str, char delim)
{
	size_t	i;
	size_t	word_count;

	i = 0;
	word_count = 0;
	while (str[i] == delim)
		i++;
	while (str[i])
	{
		while (str[i] && str[i] != delim)
			i++;
		word_count++;
		while (str[i] && str[i] == delim)
			i++;
	}
	return (word_count);
}
