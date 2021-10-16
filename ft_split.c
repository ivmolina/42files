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
#include <stdio.h>
static int	count(char const *s, char c)
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

static int	*count_word(char const *str, char c)
{
	int	i;
	int	j;
	int	k;
	int	*numlen;

	numlen =(int *) malloc(sizeof(int) * count(str, c));
	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i] == c) && str[i])
			i++;
		if (str[i] == '\0')
			return (numlen);
		while ((str[i] != c) && str[i])
		{
			j++;
			i++;
			numlen[k] = j;
		}
		k++;
	}
	return (numlen);
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
	int		*numlen;

	i = -1;
	j = 0;
	numlen = count_word(s, c);
	if ((count(s, c) == 0) || !s)
		return (NULL);
	matrix = malloc(sizeof(char *) * (count(s, c) + 1));
	if (!matrix)
		return (NULL);
	while (++i < count(s, c))
	{
		matrix[i] = malloc(sizeof(char) * (numlen[i] + 1));
		if (!matrix[i])
			return (NULL);
		forge(s, c, matrix[i], &j);
	}
	matrix[i] = NULL;
	free (numlen);
	return (matrix);
}
