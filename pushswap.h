/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 13:40:42 by nbyrd             #+#    #+#             */
/*   Updated: 2022/01/07 15:20:54 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_num
{
	int	l;
	int	*next;
}	t_num;

size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *str);
int		sa(t_num *a);
int		sb(t_num *b);
int		ss(t_num *a, t_num *b);
int		pa(t_num *a, t_num *b);
int		pb(t_num *a, t_num *b);
void	short_alg(t_num *a);
int		rra(t_num *a);
int		rrb(t_num *b);
int		rrr(t_num *a, t_num *b);
int		ra(t_num *a);
int		rb(t_num *b);
int		search_max(t_num *a);
int		search_min(t_num *a);
int		rr(t_num *a, t_num *b);
char	**ft_split(char const *s, char c);
int		ft_counter_words(char const *s, char c);
int		input_checker(char **argv);
void	ft_exit(int n);
int		fill_stack(t_num *a, char **argv, int len, int len2);
int		stack_checker(t_num *a, t_num *b);
void	five_alg(t_num *a, t_num *b);
void	min_forward(t_num *a, t_num *b);
t_num	optimize(t_num *a);
void	algoritm(t_num *a, t_num *b);
void	*ft_arr_free(char **arr);
#endif
