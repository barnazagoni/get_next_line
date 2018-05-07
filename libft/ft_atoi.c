/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bzagoni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 11:27:33 by bzagoni           #+#    #+#             */
/*   Updated: 2017/12/12 14:44:49 by bzagoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_is_space(const char *str, int i)
{
	if (str[i] == ' ' || str[i] == '\f' || str[i] == '\n')
		return (1);
	if (str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		return (1);
	return (0);
}

int			ft_atoi(const char *str)
{
	int		i;
	int		m;
	int		ret;

	ret = 0;
	i = 0;
	while (ft_is_space(str, i) == 1)
		i++;
	m = i;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			i++;
		else
			return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = ret * 10 + (str[i] - '0');
		i++;
	}
	if (str[m] == '-')
		ret *= -1;
	return (ret);
}
