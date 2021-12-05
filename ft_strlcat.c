/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:59:18 by sankang           #+#    #+#             */
/*   Updated: 2021/12/02 23:59:34 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	__strnlen(const char *s, size_t maxlen)
{
	const char	*p = ft_memchr(s, 0, maxlen);

	if (p)
		return (p - s);
	else
		return (maxlen);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	l;

	l = __strnlen(dst, dstsize);
	if (l == dstsize)
		return (l + ft_strlen(src));
	return (l + ft_strlcpy(dst + l, src, dstsize - l));
}
