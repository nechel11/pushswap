/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 11:41:46 by zafar             #+#    #+#             */
/*   Updated: 2021/12/28 12:48:56 by zafar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	sa(t_num *a)
{
	int	tmp;

	if (a -> l > 2)
	{
		tmp = a -> next[a -> l - 1];
		a -> next[a -> l - 1] = a -> next[a -> l - 2];
		a -> next[a -> l - 2] = tmp;
	}
	ft_putstr_fd("sa\n", 1);
	return (1);
}

int	sb(t_num *b)
{
	int	tmp;

	if (b -> l > 2)
	{
		tmp = b -> next[b -> l - 1];
		b -> next[b -> l - 1] = b -> next[b -> l - 2];
		b -> next[b -> l - 2] = tmp;
	}
	ft_putstr_fd("sb\n", 1);
	return (1);
}

int	ss(t_num *a, t_num *b)
{
	int	tmp;

	if (a -> l > 2)
	{
		tmp = a -> next[a -> l - 1];
		a -> next[a -> l - 1] = a -> next[a -> l - 2];
		a -> next[a -> l - 2] = tmp;
	}
	if (b -> l > 2)
	{
		tmp = b -> next[b -> l - 1];
		b -> next[b -> l - 1] = b -> next[b -> l - 2];
		b -> next[b -> l - 2] = tmp;
	}
	ft_putstr_fd("ss\n", 1);
	return (1);
}

int	pa(t_num *a, t_num *b)
{
	if (!a -> l)
		return (0);
	a -> next[a -> l++] = b -> next[--b -> l];
	ft_putstr_fd("pa\n", 1);
	return (1);
}

int	pb(t_num *a, t_num *b)
{
	if (!a -> l)
		return (0);
	b -> next[b -> l++] = a -> next[--a -> l];
	ft_putstr_fd("pb\n", 1);
	return (1);
}
