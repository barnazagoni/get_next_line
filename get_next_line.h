/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 17:37:48 by bzagoni           #+#    #+#             */
/*   Updated: 2018/01/19 15:56:30 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 32
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_read
{
	int			fd;
	char		*string;
}				t_read;

int				get_next_line(const int fd, char **line);

#endif
