/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:13:54 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:45:28 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		i;
	int		j;

	if (s1 && s2)
	{
		a = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		i = 0;
		j = 0;
		while (*(s1 + i) != '\0' && a != NULL)
		{
			*(a + i) = *(s1 + i);
			i++;
		}
		while (*(s2 + j) != '\0' && a != NULL)
		{
			*(a + i + j) = *(s2 + j);
			j++;
		}
		if (a != NULL)
			*(a + i + j) = '\0';
		return (a);
	}
	return (NULL);
}
