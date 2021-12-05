/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:33:42 by sankang           #+#    #+#             */
/*   Updated: 2021/11/27 17:40:42 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*us1 = (void *)s1;
	const unsigned char	*us2 = (void *)s2;

	if (!n--)
		return (0);
	while (*us1 && *us2 && n && *us1 == *us2)
	{
		us1++;
		us2++;
		n--;
	}
	return ((int)(*us1 - *us2));
}
