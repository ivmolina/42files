/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: socana-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:19:18 by socana-b          #+#    #+#             */
/*   Updated: 2021/12/02 12:19:20 by socana-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*fix_to_return(char *str)
{
	unsigned int	i;
	char			*aux;

	i = 0;
	aux = malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i] != '\n')
	{
		aux[i] = str[i];
		i++;
	}
	aux[i] = '\n';
	aux[++i] = '\0';
	return (aux);
}

char *fix_new_line(char *str)
{
	char			*aux;
	unsigned int	i;
	unsigned int	j;

	aux = malloc(sizeof(char) * ft_strlen(str));
	i = 0;
	j = 0;
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buffer;

	if ((fd < 0) && (BUFFER_SIZE <= 0))
		return (NULL);
	buffer = malloc (sizeof(char) * BUFFER_SIZE);
	if (!line)
		line = ft_strdup("");
	else
		line = ft_strdup(fix_new_line(line));
	if (contains(line, '\n') == 0)
	{
		while (!contains(buffer, '\n'))
		{
		read(fd, buffer, BUFFER_SIZE);
		line = ft_strjoin(line, buffer);
		}
	}
	return (fix_to_return(line));
}
