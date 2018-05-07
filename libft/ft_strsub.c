/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 17:38:40 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:41:42 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*a;
	int		i;

	if (s)
	{
		a = (char*)malloc(sizeof(char) * (len + 1));
		i = 0;
		while ((size_t)i < len && a != NULL)
		{
			*(a + i) = *(s + start + i);
			i++;
			if ((size_t)i == len)
				*(a + i) = '\0';
		}
		return (a);
	}
	return (NULL);
}
