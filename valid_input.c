/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zafar <nbyrd@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 12:06:43 by zafar             #+#    #+#             */
/*   Updated: 2022/01/07 15:16:40 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_exit(int n)
{
	(void)n;
	ft_putstr_fd("Bad arguments", 1);
	exit(0);
}

int	input_checker(char **argv)
{
	int	i;
	int	j;
	int	res;

	res = 0;
	i = 0;
	while (argv[++i])
	{
		res += ft_counter_words(argv[i], ' ');
		j = -1;
		while (argv[i][++j])
		{
			if (!(argv[i][j] == ' ' || argv[i][j] == '-' ||
		argv[i][j] == '+' || (argv[i][j] >= '0' && argv[i][j] <= '9')))
				ft_exit(1);
		}
	}
	return (res);
}

int	fill_stack(t_num *a, char **argv, int len, int len2)
{
	int		i;
	int		words;
	char	**splitted;
	int		j;
	int		l;

	i = 0;
	while (argv[++i])
	{
		words = ft_counter_words(argv[i], ' ');
		splitted = ft_split(argv[i], ' ');
		j = 0;
		while (j < words)
		{
			a -> next[--len2] = ft_atoi(splitted[j++]);
			l = len;
			while (--l > len2)
				if (a -> next[len2] == a -> next[l])
					ft_exit(1);
		}
		ft_arr_free(splitted);
	}
	return (0);
}

int	stack_checker(t_num *a, t_num *b)
{
	int	i;

	i = 0;
	if (b -> l)
		return (0);
	while (++i < a -> l)
	{
		if (a -> next[i] > a -> next[i - 1])
			return (0);
	}
	return (1);
}
