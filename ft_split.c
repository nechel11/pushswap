/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbyrd <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:16:04 by nbyrd             #+#    #+#             */
/*   Updated: 2022/01/07 15:21:13 by nbyrd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_counter_words(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			j++;
		i++;
	}
	return (j);
}

static int	ft_len_counter(char const *s, char c)
{
	int	counter;
	int	i;

	counter = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] && s[i] != c)
	{
		counter++;
		i++;
	}
	return (counter);
}

void	*ft_arr_free(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	return (NULL);
}

static char	**kostyl(char const *s, char c)
{
	char	**arr;

	if (!s)
		return (0);
	arr = (char **)malloc(sizeof(char *) * (ft_counter_words(s, c) + 1));
	if (!arr)
		return (0);
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	arr = kostyl(s, c);
	if (!arr)
		return (NULL);
	while (i < ft_counter_words(s, c))
	{
		(arr[i] = (char *)malloc(sizeof(char) *(ft_len_counter(s + k, c) + 1)));
		if (!arr[i])
			return (ft_arr_free(arr));
		j = 0;
		while (s[k] == c)
			k++;
		while (s[k] && s[k] != c)
			arr[i][j++] = s[k++];
		arr[i][j] = '\0';
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
