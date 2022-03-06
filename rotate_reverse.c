/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 12:22:34 by zafar             #+#    #+#             */
/*   Updated: 2022/01/02 15:12:22 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	rra(t_num *a)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < a -> l - 1)
	{
		tmp = a -> next[i];
		a -> next[i] = a -> next[i + 1];
		a -> next[i + 1] = tmp;
	}
	ft_putstr_fd("rra\n", 1);
	return (1);
}

int	rrb(t_num *b)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < b -> l - 1)
	{
		tmp = b -> next[i];
		b -> next[i] = b -> next[i + 1];
		b -> next[i + 1] = tmp;
	}
	ft_putstr_fd("rrb\n", 1);
	return (1);
}

int	rrr(t_num *a, t_num *b)
{
	int	i;
	int	tmp;

	i = -1;
	while (++i < a -> l - 1)
	{
		tmp = a -> next[i];
		a -> next[i] = a -> next[i + 1];
		a -> next[i + 1] = tmp;
	}
	i = -1;
	while (++i < b -> l - 1)
	{
		tmp = b -> next[i];
		b -> next[i] = b -> next[i + 1];
		b -> next[i + 1] = tmp;
	}
	ft_putstr_fd("rrr\n", 1);
	return (1);
}

int	ra(t_num *a)
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
	ft_putstr_fd("ra\n", 1);
	return (1);
}

int	rb(t_num *b)
{
	int	tmp;
	int	i;

	i = 0;
	while (++i < b -> l)
	{
		tmp = b -> next[b -> l - i];
		b -> next[b -> l - i] = b -> next[b -> l - i - 1];
		b -> next[b -> l - i - 1] = tmp;
	}
	ft_putstr_fd("rb\n", 1);
	return (1);
}
