/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 02:21:12 by sankang           #+#    #+#             */
/*   Updated: 2021/11/30 15:36:47 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	__isnegative(long long n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

static int	__getlen(long long n)
{
	int	len;

	len = 1;
	if (__isnegative(n))
	{
		n *= -1;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	ln;
	const int	len = __getlen(n);
	char		*s;

	if (n == 0)
		return (ft_strdup("0"));
	s = (char *)ft_calloc(1, len + 1);
	if (!s)
		return (NULL);
	ln = n;
	if (ln < 0)
	{
		*s = '-';
		ln *= -1;
	}	
	s += len;
	while (ln)
	{
		*--s = '0' + ln % 10;
		ln /= 10;
	}
	return (s - __isnegative(n));
}
