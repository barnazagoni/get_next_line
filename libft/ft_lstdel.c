/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 20:21:49 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 20:35:05 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	(*del)((**alst).content, (**alst).content_size);
	if ((**alst).next != NULL)
		ft_lstdel(&(**alst).next, (*del));
	free(*(void**)alst);
	*alst = NULL;
}
