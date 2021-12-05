/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:24:32 by sankang           #+#    #+#             */
/*   Updated: 2021/11/30 02:55:52 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	const size_t	s1_len = ft_strlen(s1);
	const size_t	s2_len = ft_strlen(s2);
	char			*new;

	new = (char *)ft_calloc(1, s1_len + s2_len + 1);
	if (!new)
		return (NULL);
	ft_strlcat(new, s1, s1_len + 1);
	ft_strlcat(new, s2, s1_len + s2_len + 1);
	return (new);
}
