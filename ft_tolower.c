/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:14:04 by sankang           #+#    #+#             */
/*   Updated: 2021/11/30 15:37:28 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	__isupper(int c)
{
	return ((unsigned int)c - 'A' < 26);
}

int	ft_tolower(int c)
{
	if (__isupper(c))
		return (c | 32);
	return (c);
}
