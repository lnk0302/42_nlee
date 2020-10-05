/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 10:57:25 by nlee              #+#    #+#             */
/*   Updated: 2020/08/09 17:24:15 by nlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int			ft_str_is_alpha(char *str)
{
	char	*temp;
	int		i;

	temp = str;
	i = 0;
	while (temp[i] != '\0')
	{
		if (temp[i] < 'a' || temp[i] > 'z')
			if (temp[i] < 'A' || temp[i] > 'Z')
				return (0);
		i++;
	}
	return (1);
}
