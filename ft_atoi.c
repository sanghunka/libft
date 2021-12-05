/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:28:03 by sankang           #+#    #+#             */
/*   Updated: 2021/12/04 23:18:37 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	__isspace(int c)
{
	return (c == ' ' || (unsigned int)c - '\t' < 5);
}

int	ft_atoi(const char *str)
{
	const unsigned long long	ullmax = 9223372036854775807ULL;
	const unsigned long long	ullmin = 9223372036854775808ULL;
	unsigned long long			n;
	int							sign;

	n = 0;
	sign = 1;
	while (__isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -1;
	while (ft_isdigit(*str))
	{
		n = 10 * n + (*str++ - '0');
		if ((n > ullmin) && (sign == -1))
			return (0);
		if ((n > ullmax) && (sign == 1))
			return (-1);
	}
	return (sign * n);
}
