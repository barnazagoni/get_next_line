/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:37:32 by bzagoni           #+#    #+#             */
/*   Updated: 2018/01/19 15:55:48 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"

static t_read		*ft_get_create_struct(int fd, t_list **list)
{
	t_list			*listptr;
	t_read			*new;

	listptr = *list;
	while (listptr)
	{
		if (((t_read *)(listptr->content))->fd == fd)
			return (listptr->content);
		listptr = listptr->next;
	}
	new = (t_read*)malloc(sizeof(t_read));
	new->fd = fd;
	new->string = ft_strnew(1);
	listptr = ft_lstnew(NULL, 0);
	listptr->content_size = sizeof(new);
	listptr->content = new;
	ft_lstadd(list, listptr);
	return ((t_read*)(listptr->content));
}

static char			*ft_createstring(char *str)
{
	int				i;
	char			*a;

	i = 0;
	a = str;
	while (str[i] != '\n' && str[i] != '\0')
		i++;
	return (ft_strsub(a, 0, i));
}

static int			ft_read(t_read *strukt, char **out)
{
	char			buf[BUFF_SIZE + 1];
	char			*ptr;
	int				a;

	while ((a = read(strukt->fd, buf, BUFF_SIZE)) > 0)
	{
		buf[a] = '\0';
		strukt->string = ft_strjoin(strukt->string, buf);
		if ((ptr = ft_strchr(strukt->string, '\n')))
		{
			*out = ft_createstring(strukt->string);
			strukt->string = ptr + 1;
			return (1);
		}
	}
	if (a == 0 && *(strukt->string) == '\0')
		return (0);
	else if (a < 0)
		return (-1);
	*out = ft_createstring(strukt->string);
	ft_strclr(strukt->string);
	return (1);
}

int					get_next_line(const int fd, char **line)
{
	static t_list	*mainlist;
	t_read			*current;
	char			*ptr;

	current = ft_get_create_struct(fd, &mainlist);
	if (fd < 0 || !line || read(fd, 0, 0))
		return (-1);
	if ((ptr = ft_strchr(current->string, '\n')))
	{
		*line = ft_createstring(current->string);
		current->string = ptr + 1;
		return (1);
	}
	return (ft_read(current, line));
}
