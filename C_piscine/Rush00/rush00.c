/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 14:01:42 by nlee              #+#    #+#             */
/*   Updated: 2020/08/01 18:45:07 by nlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		if (i == 1)
		{
			while (j <= x)
			{
				if (j == 1)
					ft_putchar('o');
				else if (j > 1 && j < x)
					ft_putchar('-');
				else if (j == x)
					ft_putchar('o');
				j++;
			}
		}
		else if (i > 1 && i < y)
		{
			while (j <= x)
			{
				if (j == 1 || j == x)
					ft_putchar('|');
				else if (j > 1 && j < x)
					ft_putchar(' ');
				j++;
			}
		}
		else if (i == y)
		{
			while (j <= x)
			{
				if (j == 1)
					ft_putchar('o');
				else if (j > 1 && j < x)
					ft_putchar('-');
				else if (j == x)
					ft_putchar('o');
				j++;
			}
		}
		ft_putchar('\n');
		i++;
	}
}
