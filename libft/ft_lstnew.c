/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 19:07:46 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:11:52 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *a;

	a = (t_list *)malloc(sizeof(*a));
	if (a != NULL)
	{
		if (content == NULL)
		{
			a->content = NULL;
			a->content_size = 0;
		}
		else
		{
			a->content = (void*)malloc(content_size);
			if (a->content == NULL)
				return (NULL);
			ft_memcpy(a->content, content, content_size);
			a->content_size = content_size;
		}
		a->next = NULL;
	}
	return (a);
}
