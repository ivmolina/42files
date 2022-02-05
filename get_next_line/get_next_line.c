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

	if ((!str) || (str[0] == '\0'))
		return (NULL);
	i = 0;
	aux = malloc(sizeof(char) * ft_strlen(str) + 2);
	while ((str[i] != '\n') && (str[i] != '\0'))
	{
		aux[i] = str[i];
		i++;
	}
	if (str[i] == '\0')
		aux[i] = '\0';
	else
	{
		aux[i] = '\n';
		aux[++i] = '\0';
	}
	return (aux);
}

char	*fix_new_line(char *str)
{
	char			*aux;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while ((str[i] != '\n') && (str[i] != '\0'))
		i++;
	i++;
	aux = malloc(sizeof(char) * ft_strlen(str));
	while (str[i] != '\0')
	{
		aux[j] = str[i];
		i++;
		j++;
	}
	aux[j] = '\0';
	free(str);
	return (aux);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*buffer;
	size_t		apt;

	if ((fd < 0) && (BUFFER_SIZE <= 0))
		return (NULL);
	buffer = malloc (sizeof(char) * BUFFER_SIZE);
	apt = BUFFER_SIZE;
	if (!line)
		line = ft_strdup("");
	else
	{
		char *newLine = fix_new_line(line);
		line = ft_strdup(newLine);
		free(newLine);
	}
	while ((!contains(line, '\n')) && (apt == BUFFER_SIZE))
	{
		free(line);
		apt = read(fd, buffer, BUFFER_SIZE);
		line = ft_strjoin(line, buffer, apt);
	}
	free(buffer);
	char *result = fix_to_return(line);
	free (result);//?????????
	return (result);
}
