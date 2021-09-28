/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 08:40:16 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/16 08:40:17 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned long int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && s2[i] && s1[i])
	{
		if (*(s2 + i) != *(s1 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	if (i != n)
		return (s1[i] - s2[i]);
	return (0);
}
