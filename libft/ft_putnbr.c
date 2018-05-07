/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/09 17:50:01 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/09 18:45:47 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n < -9)
	{
		ft_putchar('-');
		ft_putnbr((n / 10) * -1);
		ft_putchar((n % 10) * -1 + '0');
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putchar(-n + '0');
	}
	else if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}
