/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 14:14:04 by sankang           #+#    #+#             */
/*   Updated: 2021/12/03 01:40:27 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	__islower(int c)
{
	return ((unsigned int)c - 'a' < 26);
}

int	ft_toupper(int c)
{
	if (__islower(c))
		return (c & 95);
	return (c);
}
