/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:01:07 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 15:43:01 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	if (src >= dst)
	{
		i = 0;
		while ((size_t)i < len)
		{
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
			i++;
		}
	}
	else
	{
		i = len - 1;
		while (i >= 0)
		{
			*(unsigned char*)(dst + i) = *(unsigned char*)(src + i);
			i--;
		}
	}
	return (dst);
}
