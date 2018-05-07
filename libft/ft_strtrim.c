/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 18:34:49 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:46:41 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char		*ft_strtrim2(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*a;

	i = 0;
	j = ft_strlen(s) - 1;
	if (j != -1)
	{
		while (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t')
			i++;
		while (j > -1 && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
			j--;
	}
	if (j > -1)
		a = (char*)malloc(sizeof(char) * (j - i + 2));
	k = 0;
	while (k < j - i + 1 && a != NULL)
	{
		*(a + k) = *(s + i + k);
		k++;
	}
	if (a != NULL)
		*(a + k) = '\0';
	return (a);
}

char		*ft_strtrim(char const *s)
{
	if (s)
		return (ft_strtrim2(s));
	else
		return (NULL);
}
