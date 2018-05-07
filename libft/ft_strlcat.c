/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 19:24:00 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 18:46:42 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int i;
	int j;

	i = ft_strlen(dst);
	if ((size_t)i >= size)
		return (size + ft_strlen(src));
	j = 0;
	while (src[j] != '\0' && (i + j) < (int)size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	if ((size_t)i == size)
		return (size + ft_strlen(src));
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
