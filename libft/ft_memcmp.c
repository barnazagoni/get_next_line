/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:27:29 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 16:19:09 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && *(unsigned char*)(s1 + i) == *(unsigned char*)(s2 + i))
		i++;
	if (i == n)
		return (0);
	else
		return (*(unsigned char*)(s1 + i) - *(unsigned char*)(s2 + i));
}
