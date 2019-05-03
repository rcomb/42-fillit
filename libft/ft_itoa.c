/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnugroho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:06:21 by vnugroho          #+#    #+#             */
/*   Updated: 2018/11/27 13:23:34 by vnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	long	abs;
	long	len;

	abs = (n < 0) ? -(long)n : n;
	len = (n < 0) ? 2 : 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	while ((abs /= 10) > 0)
		len++;
	if (!(str = (char *)ft_memalloc(len + 1)))
		return (NULL);
	abs = (n < 0) ? -n : n;
	while (len)
	{
		str[--len] = abs % 10 + '0';
		abs /= 10;
	}
	(n < 0) ? str[len] = '-' : 0;
	return (str);
}
