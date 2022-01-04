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

char	*fixtoreturn(char *str)
{
	char			*aux;
	unsigned int	i;

	i = 0;
	aux = malloc (sizeof(char) * ft_strlen(str));
	while (str[i] != '\n')
	{
		aux[i] = str[i];
		i++;
	}
	aux[i] = '\n';
	aux[++i] = '\0';
	free (aux);
	return (aux);
}

char	*repair(char *str)
{
	unsigned int	i;
	unsigned int	j;
	char			*aux;

	i = 0;
	j = 0;
	aux = malloc (sizeof(char) * ft_strlen(str));
	while (str[i] != '\n')
		i++;
	i++;
	while (str[i] != '\0')
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	return (aux);
}

char	*fillLine(char *file, int fd, int start)
{
	char			*line;
	unsigned int	j;

	j = BUFFER_SIZE;
	if (file[0] != '\0')
		line = repair(file);
	while (((j == BUFFER_SIZE) && (!contains(file, '\n'))) || start)
	{
		free (line);
		j = read (fd, file, BUFFER_SIZE);
		if (!line)
			line = ft_strdup(file);
		else
			line = ft_strjoin(line, file);
		start = 0;
	}
	free (line);
	return (fixtoreturn(line));
}

char	*get_next_line(int fd)
{
	static char	*file;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (!file)
	{
		file = ft_strdup("");
		if (!file)
			return (NULL);
		return (fillLine(file, fd, 0));
	}
	else
		return (fillLine(file, fd, 1));
	return (NULL);
}
