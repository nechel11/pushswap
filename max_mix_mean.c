/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_mix_mean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 15:21:34 by zafar             #+#    #+#             */
/*   Updated: 2022/01/02 15:12:30 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	search_max(t_num *a)
{
	int	i;
	int	max;

	i = -1;
	max = -2147483648;
	while (++i < a -> l)
		if (a -> next[i] > max)
			max = a -> next[i];
	return (max);
}

int	search_min(t_num *a)
{
	int	i;
	int	min;

	i = -1;
	min = 2147483647;
	while (++i < a -> l)
		if (a -> next[i] < min)
			min = a -> next[i];
	return (min);
}

int	rr(t_num *a, t_num *b)
{
	int	tmp;
	int	i;

	i = 0;
	while (++i < a -> l)
	{
		tmp = a -> next[a -> l - i];
		a -> next[a -> l - i] = a -> next[a -> l - i - 1];
		a -> next[a -> l - i - 1] = tmp;
	}
	i = 0;
	while (++i < b -> l)
	{
		tmp = b -> next[b -> l - i];
		b -> next[b -> l - i] = b -> next[b -> l - i - 1];
		b -> next[b -> l - i - 1] = tmp;
	}
	ft_putstr_fd("rr\n", 1);
	return (1);
}
