/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 16:19:16 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 16:57:35 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		ch;
	size_t		i;
	char		*d;
	const char	*s;

	s = src;
	d = dst;
	ch = c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == ch)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
