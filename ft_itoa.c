/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 10:11:12 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/30 10:11:13 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leng(int n)
{
	int	count;
	int	aux;

	count = 0;
	aux = 1;
	if (n < 0)
		n *= -1;
	while (aux < n)
	{
		aux *= 10;
		count++;
	}
	return (count);
}

static void	aux(char *num, int n, int x)
{
	int	i;

	i = 0;
	while (x > 0)
	{
		if (n >= 0)
		{
			num[i] = (n / x) + 48;
			n = n - ((n / x) * x);
			x /= 10;
		}
		else
		{
			n *= -1;
			num[i] = '-';
		}
		i++;
	}
	num[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	*num;
	int		x;
	int		i;

	i = 0;
	x = 1;
	num = malloc (sizeof(char) * (leng(n) + 1));
	if (num == NULL)
		return (NULL);
	while (i < leng(n) - 1)
	{
		x *= 10;
		i++;
	}
	aux (num, n, x);
	return (num);
}
