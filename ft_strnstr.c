/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 02:33:13 by sankang           #+#    #+#             */
/*   Updated: 2021/12/03 02:29:04 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;

	n_len = ft_strlen(needle);
	if (n_len == 0)
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	while (ft_strncmp(haystack, needle, n_len) != 0)
	{
		haystack++;
		len--;
		if (len == 0 || len < n_len || *haystack == '\0')
			return (NULL);
	}
	return ((char *)haystack);
}
