/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alg.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 16:08:01 by zafar             #+#    #+#             */
/*   Updated: 2022/01/03 17:29:25 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	short_alg(t_num *a)
{
	int	max;

	max = search_max(a);
	if (a -> l == 2)
		sa(a);
	if (a -> l == 3)
	{
		if (a -> next[0] == max && a -> next[1] < a -> next[2])
			sa(a);
		else if (a -> next[2] == max && a -> next[1] > a -> next[0])
		{
			ra(a);
			sa(a);
		}
		else if (a -> next[2] == max && a -> next[1] < a -> next[0])
			ra(a);
		else if (a -> next[1] == max && a -> next[2] > a -> next[0])
			rra(a);
		else if (a -> next[1] == max && a -> next[2] < a -> next[0])
		{
			rra(a);
			sa(a);
		}
	}
}

void	five_alg(t_num *a, t_num *b)
{
	while (a -> l > 3)
		min_forward(a, b);
	short_alg(a);
	while (b -> l)
		pa(a, b);
}

void	min_forward(t_num *a, t_num *b)
{
	int	min;
	int	i;

	i = -1;
	min = search_min(a);
	while (++i < a -> l)
		if (a -> next[i] == min)
			break ;
	if (i == a -> l)
	{
		pb(a, b);
		return ;
	}
	if (++i <= a -> l / 2)
		while (--i >= 0)
			rra(a);
	else if (i > a -> l / 2 && i < a -> l)
		while ((a -> l - ++i) >= 0)
			ra(a);
	pb(a, b);
}

t_num	optimize(t_num *a)
{
	t_num	normi;
	int		k;
	int		min;
	int		max;
	int		i;

	normi.l = a -> l;
	normi.next = (int *)malloc(sizeof(int) * normi.l);
	k = 0;
	min = search_min(a) - 1;
	max = search_max(a);
	while (++min <= max)
	{
		i = -1;
		while (++i < a -> l)
		{
			if (min == a -> next[i])
			{
				normi.next[i] = k++;
				a -> next[i] = max + 1;
			}
		}
	}
	free(a -> next);
	return (normi);
}

void	algoritm(t_num *a, t_num *b)
{
	int	max_bits;
	int	i;
	int	j;
	int	max;

	*a = optimize(a);
	max = search_max(a);
	max_bits = 0;
	while ((max >> max_bits) != 0)
		++max_bits;
	i = -1;
	while (++i < max_bits)
	{
		j = a -> l;
		while (--j >= 0)
		{
			if (((a -> next[a -> l -1] >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		while (b -> l)
			pa(a, b);
	}
}
