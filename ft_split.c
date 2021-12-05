/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sankang <sankang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 20:27:36 by sankang           #+#    #+#             */
/*   Updated: 2021/12/04 03:04:52 by sankang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	__isdel(char l, char c)
{
	return (l == c);
}

static int	__getlen(char const *s, char c)
{
	int	cnt;

	cnt = 0;
	while (*s)
	{
		if (!__isdel(*s, c))
			if (__isdel(*(s + 1), c) || *(s + 1) == '\0')
				cnt++;
		s++;
	}
	return (cnt);
}

static char	**__free(char	**tab, int n)
{
	int	i;

	i = 0;
	while (i < n)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		n;
	int		start;
	char	**tab;

	i = -1;
	n = -1;
	start = -1;
	tab = (char **)malloc(sizeof(char *) * (__getlen(s, c) + 1));
	if (!tab)
		return (NULL);
	while (s[++i])
	{
		if (start == -1 && !__isdel(s[i], c))
			start = i;
		if (!__isdel(s[i], c) && (__isdel(s[i + 1], c) || s[i + 1] == '\0'))
		{
			tab[++n] = ft_substr(s, start, i - start + 1);
			if (!tab[n])
				return (__free(tab, n));
			start = -1;
		}
	}
	tab[++n] = 0;
	return (tab);
}
