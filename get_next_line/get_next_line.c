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



char	*get_next_line(int fd)
{
	static char *line;
	char *buffer;

	if ((fd < 0) && (BUFFER_SIZE <= 0))
		return (NULL);
	buffer = malloc (sizeof(char) * BUFFER_SIZE);
	while (!contains(buffer, '\n'))
	{
		read(fd, buffer, BUFFER_SIZE);
		printf("(%s)\n", buffer);
		if (!line)
			line = ft_strdup(buffer);
		else
			line = ft_strjoin(line, buffer);
	}
	if (contains(buffer, '\n') == 1)
		return (line);
	else if (contains(buffer, '\n') > 1)
		return ("pito");
	return (NULL);
}
