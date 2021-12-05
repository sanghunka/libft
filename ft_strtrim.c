/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:07:59 by sankang           #+#    #+#             */
/*   Updated: 2021/12/03 02:50:35 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			len;
	const size_t	set_len = ft_strlen(set);
	char			*start;
	char			*end;

	len = ft_strlen(s1);
	start = (char *)s1;
	while (ft_memchr(set, *start, set_len) && len--)
		start++;
	end = start + len - 1;
	if (len)
		while (ft_memchr(set, *end, set_len))
			end--;
	return (ft_substr(s1, start - s1, end - start + 1));
}
