/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:23:27 by socana-b          #+#    #+#             */
/*   Updated: 2021/10/05 16:23:28 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char const		*auxsrc;
	char			*auxdst;

	i = 0;
	auxsrc = src;
	auxdst = dst;
	while (i < len)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}
