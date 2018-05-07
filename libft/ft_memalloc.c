/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 15:27:36 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/09 21:08:46 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*a;
	int		i;

	i = 0;
	a = malloc(size);
	while ((size_t)i < size && a != NULL)
	{
		*(char*)(a + i) = 0;
		i++;
	}
	return (a);
}
