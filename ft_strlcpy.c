/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 12:56:14 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/18 12:56:15 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	while (src[i] && (i < ((int)dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}