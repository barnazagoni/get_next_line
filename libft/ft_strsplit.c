/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 19:16:41 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/12 17:26:14 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	ft_rows(char const *s, char c)
{
	int		i;
	int		r;

	i = 0;
	r = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		r++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (r);
}

static char	**ft_strsplit2(char const *s, char c)
{
	char	**a;
	int		i;
	int		l;

	a = (char **)malloc(sizeof(char *) * ft_rows(s, c) + 1);
	i = 0;
	while (s && *s != '\0' && a != NULL)
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != '\0')
		{
			l = 0;
			while (s[l] != c && s[l] != '\0')
				l++;
			a[i++] = ft_strsub(s, 0, l);
			s = s + l;
		}
	}
	if (a != NULL)
		a[i] = NULL;
	return (a);
}

char		**ft_strsplit(char const *s, char c)
{
	if (s)
		return (ft_strsplit2(s, c));
	return (NULL);
}
