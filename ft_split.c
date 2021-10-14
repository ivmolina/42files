/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:22:38 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/30 10:22:39 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	count_word(char const *str, char c, int *i)
{
	int	j;

	j = 0;
	while (str[j] == c)
		j++;
	*i = j;
	while (str[*i] != c)
		*i = *i + 1;
}

static int count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while ((s[i] == c) && s[i])
			i++;
		if (s[i] == '\0')
			return (count);
		while ((s[i] != c) && s[i])
			i++;
		count++;
	}
	return (count);
}

static void	forge(char const *s, char c, char *m, int *j)
{
	int	i;

	i = 0;
	while ((s[*j] == c) && s[*j])
		(*j) = (*j) + 1;
	while ((s[*j] != c) && s[*j])
	{
		m[i] = s[*j];
		i++;
		(*j) = (*j) + 1;
	}
	m[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**matrix;
	int		i;
	int		j;
	int		k;

	i = -1;
	j = 0;
	k = 0;
	if ((count(s, c) == 0) || !s)
		return (0);
	matrix = malloc(sizeof(char *) * count(s, c));
	if (!matrix)
		return (NULL);
	while (++i < count(s, c))
	{
		count_word(s, c, &k);
		matrix[i] = malloc(sizeof(char) * (k + 1));
		if (!matrix[i])
			return (NULL);
		forge(s, c, matrix[i], &j);
	}
	return (matrix);
}
