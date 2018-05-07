/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 16:51:59 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:29:17 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	int		j;
	char	*a;

	if (s && f)
	{
		a = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		j = 0;
		while (*(s + j) != '\0' && a != NULL)
		{
			*(a + j) = (*f)(*(s + j));
			j++;
		}
		if (a != NULL)
			*(a + j) = '\0';
		return (a);
	}
	return (NULL);
}
