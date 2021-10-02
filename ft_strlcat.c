/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:34:44 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/18 15:34:45 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	int		i;
	int		j;
	int		aux;

	i = 0;
	j = 0;
	aux = ft_strlen(dst);
	if (dstsize >= ft_strlen(dst))
		return (ft_strlen(src) + ft_strlen(dst));
	else
		return (ft_strlen(src) + dstsize);
	while (dst[i])
		i++;
	while (j < (int)(dstsize - aux - 1))
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0';
	return (len);
}
