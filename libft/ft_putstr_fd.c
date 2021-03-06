/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 18:40:25 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/11 21:48:23 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char const *s, int fd)
{
	if (s && *s != '\0')
	{
		write(fd, s, 1);
		ft_putstr_fd(s + 1, fd);
	}
}
