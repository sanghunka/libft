/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 01:11:33 by sankang           #+#    #+#             */
/*   Updated: 2021/11/27 17:24:51 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ustr;
	unsigned char	uc;

	ustr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ustr == uc)
			return (ustr);
		ustr++;
	}
	return (NULL);
}
