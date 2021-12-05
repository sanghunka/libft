/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 16:28:03 by sankang           #+#    #+#             */
/*   Updated: 2021/12/05 21:54:59 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	__isspace(int c)
{
	return (c == ' ' || (unsigned int)c - '\t' < 5);
}

int	ft_atoi(const char *str)
{
	const unsigned long long	ullmax = LLONG_MAX;
	const unsigned long long	ullmin = -1 * (ullmax + 1);
	unsigned long long			n;
	unsigned long long			n_before;
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
		n_before = n;
		n = 10 * n + (*str++ - '0');
		if (((n > ullmin) || (n < n_before)) && (sign == -1))
			return (0);
		if (((n > ullmax) || (n < n_before)) && (sign == 1))
			return (-1);
	}
	return (sign * n);
}
