/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:11:45 by sankang           #+#    #+#             */
/*   Updated: 2021/11/27 17:24:58 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*us1 = s1;
	const unsigned char	*us2 = s2;

	if (!n--)
		return (0);
	while (n && *us1 == *us2)
	{
		us1++;
		us2++;
		n--;
	}
	return ((int)(*us1 - *us2));
}
