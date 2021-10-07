/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:26:05 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/18 16:26:08 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*aux;

	j = 0;
	i = start;
	if (start >= ft_strlen(s))
		return ("\0");
	aux = malloc (sizeof(char) * ft_strlen(s));
	if (aux == NULL)
		return (NULL);
	while ((j < len) && s[i])
	{
		aux[j] = s[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}
