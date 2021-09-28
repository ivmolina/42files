/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:27:41 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/16 08:27:44 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_number(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}

int	atoi2(const char *str, int i)
{
	int	n;

	n = 0;
	while (is_number(str[i]))
	{
		n += (int)str[i] - 48;
		if (is_number(str[i + 1]))
			n *= 10;
		i++;
	}
	return (n);
}

int	space(const char *str, int i)
{
	while ((str[i] == ' ') || (str[i] == '\t'))
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	number;

	i = 0;
	s = 1;
	if ((str[i] == ' ') || (str[i] == '\t'))
		i = space(str, i);
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	number = atoi2(str, i);
	return (number * s);
}
