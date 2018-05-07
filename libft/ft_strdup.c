/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/02 16:52:49 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/10 15:14:43 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*a;
	int		i;

	a = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	i = 0;
	while (*(s1 + i) != '\0' && a != NULL)
	{
		*(a + i) = *(s1 + i);
		i++;
	}
	if (a != NULL)
		*(a + i) = '\0';
	return (a);
}
