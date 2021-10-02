/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 17:36:07 by socana-b          #+#    #+#             */
/*   Updated: 2021/10/02 17:36:09 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char const		*saux;

	i = 0;
	saux = s;
	while (i < n)
	{
		if (c == saux[i])
			return ((char *)(saux + i));
		i++;
	}
	return (0);
}
