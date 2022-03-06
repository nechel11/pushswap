/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 14:27:34 by zafar             #+#    #+#             */
/*   Updated: 2022/01/07 15:26:54 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	t_num	a;
	t_num	b;

	if (argc < 1)
		return (-1);
	b.l = 0;
	a.l = input_checker(argv);
	a.next = (int *)malloc(sizeof(int) * (a.l));
	b.next = (int *)malloc(sizeof(int) * (a.l));
	if (!a.next || !b.next)
		return (0);
	fill_stack(&a, argv, a.l, a.l);
	if (stack_checker(&a, &b))
		return (1);
	if (a.l < 4)
		short_alg(&a);
	else if (a.l < 6)
		five_alg(&a, &b);
	else
		algoritm(&a, &b);
	free(a.next);
	free(b.next);
	return (0);
}
