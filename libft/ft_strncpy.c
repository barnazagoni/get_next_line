/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 17:47:05 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/02 17:58:50 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while ((size_t)i < len && *(src + i) != '\0')
	{
		*(dst + i) = *(src + i);
		i++;
	}
	while ((size_t)i < len)
	{
		*(dst + i) = '\0';
		i++;
	}
	return (dst);
}
