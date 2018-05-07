/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 20:56:06 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:12:03 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *a;

	if (lst == NULL || f == NULL)
		return (NULL);
	a = (t_list *)malloc(sizeof(t_list));
	a = (*f)(lst);
	a->next = ft_lstmap(lst->next, (*f));
	return (a);
}
