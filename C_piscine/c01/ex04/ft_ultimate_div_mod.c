/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/03 17:21:16 by nlee              #+#    #+#             */
/*   Updated: 2020/08/05 09:56:05 by nlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_ultimate_div_mod(int *a, int *b)
{
	int a_a;
	int b_b;

	a_a = *a;
	b_b = *b;
	*a = a_a / b_b;
	*b = a_a % b_b;
}
