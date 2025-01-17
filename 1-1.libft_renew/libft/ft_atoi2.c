/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namkyu <namkyu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 14:31:08 by namkyu            #+#    #+#             */
/*   Updated: 2021/04/30 15:23:22 by namkyu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../INC/libft.h"

int range_check(unsigned long long num, int sign, int type)
{
	if (type == 1)
	{
		if (sign > 0 && num > INT_MAX)
			return (0);
		else if (sign < 0 && num - 1 > INT_MAX)
			return (0);
	}
	else if (type == 2)
	{
		if (sign > 0 && num > LLONG_MAX)
			return (0);
		else if (sign < 0 && num - 1 > LLONG_MAX)
			return (0);
	}
	return (1);
}

int	ft_atoi2(const char *str, int *ret1, long long *ret2, int type)
{
	unsigned long long	num;
	int 				sign;
	int					i;
	int 				range;

	i = 0;
	sign = 1;
	num = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		num = ((num * 10) + (str[i] - '0'));
		i++;
	}
	range = range_check(num, sign, type);
	if (type == 1 && range)
		*ret1 = (int)(num * sign);
	if (type == 2 && range)
		*ret2 = (long long)(num * sign);
	return (range);
}
