/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:21:14 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/13 20:14:57 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	while ((size_t)i < n)
	{
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return ((unsigned char*)(s + i));
		i++;
	}
	return (NULL);
}
