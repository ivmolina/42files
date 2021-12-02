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

static int createResult(char *str)
{
	char *result;
	unsigned long int i;

	i = 0;
	while((str[i] != '\n') || (str[i] != '\0'))
		i++;
	if (str[i] == '\n')
		return (i);
	else
		return (0);
}

char	*get_next_line(int fd)
{
	static char	*line;
	char		*result;

	line = malloc (sizeof(char) * BUFFER_SIZE + 1);
	read(fd, line, BUFFER_SIZE);
	result = createResult(line);
	return (result);
}
