/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 14:42:38 by socana-b          #+#    #+#             */
/*   Updated: 2021/09/24 14:42:39 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find(char const *set, char car)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == car)
			return (1);
		i++;
	}
	return (0);
}

static void	cut(char const *s1, char const *set, char *resul)
{
	int		i;
	int		j;
	char	*aux;

	aux = malloc(sizeof(char) * ft_strlen(s1));
	ft_strlcpy(aux, s1, ft_strlen(s1) + 1);
	i = 0;
	while (aux[i])
	{
		if (find(set, aux[i]))
		{
			j = i;
			while (aux[j])
			{
				resul[j] = aux[j + 1];
				j++;
			}
			ft_strlcpy(aux, resul, ft_strlen(s1) + 1);
			i--;
		}
		else
			resul[i] = aux[i];
		i++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*aux;

	aux = malloc(sizeof(char) * ft_strlen(s1));
	if (aux == NULL)
		return (NULL);
	cut(s1, set, aux);
	return (aux);
}
