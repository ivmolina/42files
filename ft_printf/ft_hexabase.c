/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:47:02 by socana-b          #+#    #+#             */
/*   Updated: 2021/11/09 12:47:04 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	hexadecimal(unsigned long n, char *base)
{
	if (n < 16)
		return (write (1, &base[n], 1));
	else
		return (hexadecimal((n / 16), "0123456789abcdef")
			+ write(1, &base[n % 16], 1));
}

int	upperhexadecimal(unsigned long n, char *base)
{
	if (n < 16)
		return (write (1, &base[n], 1));
	else
		return (upperhexadecimal((n / 16), "0123456789ABCDEF")
			+ write(1, &base[n % 16], 1));
}

void	pointer(void *p)
{
	unsigned long	*aux;

	write(1, "0x", 2);
	aux = p;
	hexadecimal((unsigned long)p, "0123456789abcdef");
}

int	unsign(unsigned long n, char *base)
{
	if (n < 10)
		return (write (1, &base[n], 1));
	else
		return (unsign((n / 10), "0123456789") + write(1, &base[n % 10], 1));
}

int	number(int n, char *base)
{
	if (n < 0)
	{
		n *= -1;
		write(1, "-", 1);
	}
	if (n < 10)
		return (write (1, &base[n], 1));
	else
		return (number((n / 10), "0123456789") + write(1, &base[n % 10], 1));
}
