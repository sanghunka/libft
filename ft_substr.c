/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:33:14 by sankang           #+#    #+#             */
/*   Updated: 2021/11/30 02:54:00 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*substr;
	const unsigned int	s_len = ft_strlen(s);
	size_t				size;

	if (s_len + 1 < start)
		return (ft_strdup(""));
	else if (s_len >= start + len)
		size = len + 1;
	else
		size = s_len - start + 1;
	substr = malloc(size);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, size);
	return (substr);
}
