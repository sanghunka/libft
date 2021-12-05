/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:59:16 by sankang           #+#    #+#             */
/*   Updated: 2021/11/27 19:56:34 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*cdst;
	const unsigned char	*csrc = src;

	cdst = dst;
	if (cdst == csrc || len == 0)
		;
	else if (csrc > cdst && ((size_t)(csrc - cdst) < len))
		while (len--)
			*cdst++ = *csrc++;
	else if (cdst > csrc && ((size_t)(cdst - csrc) < len))
	{
		cdst += len;
		csrc += len;
		while (len--)
			*--cdst = *--csrc;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
