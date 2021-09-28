/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:50:27 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/18 15:50:30 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		l;
	int		i;
	char	*aux;

	l = ft_strlen(s1);
	i = 0;
	aux = malloc (sizeof(char) * l);
	if (aux == NULL)
	{
		return (NULL);
	}
	else
	{
		while (s1[i])
		{
			aux[i] = s1[i];
			i++;
		}
		aux[i] = '\0';
		return (aux);
	}
}
