/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 15:14:00 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 13:49:38 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int j;

	i = 0;
	if (*little == '\0')
		return ((char*)big);
	while (*(big + i) != '\0')
	{
		j = 0;
		while (*(big + i + j) == *(little + j) || *(little + j) == '\0')
		{
			if (*(little + j) == '\0')
				return (char*)(big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
