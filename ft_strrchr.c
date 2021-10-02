/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:19:16 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/14 12:19:18 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counts(const char *s, int c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	return (count);
}

static int	find(const char *s, int c)
{
	int	i;
	int	j;

	j = counts(s, c);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (j == 1)
				return (i);
			j--;
		}
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	if (c == '\0')
		return ("\0");
	if (counts(s, c) >= 1)
		return ((char *)(s + find(s, c)));
	else
		return (0);
}
