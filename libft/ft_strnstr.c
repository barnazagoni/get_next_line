/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:57:13 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 14:00:44 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (*(little) == '\0')
		return ((char*)big);
	while (*(big + i) != '\0' && (size_t)(i) <= len)
	{
		j = 0;
		while (*(big + i + j) == *(little + j) || *(little + j) == '\0')
		{
			if (*(little + j) == '\0')
				return (char*)(big + i);
			j++;
			if ((size_t)(i + j) > len)
				return (NULL);
		}
		i++;
	}
	return (NULL);
}
