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

char	*get_next_line(int fd)
{
	static char	*line;
	char		*result;

	line = malloc (sizeof(char) * BUFFER_SIZE + 1);
	if (!line)
		return NULL;
	while ((!line) || (!contains(line, '\n')))
	{
		read(fd, line, BUFFER_SIZE);
		if(!result)
		result = ft_strdup(line);
		else
			result = ft_strjoin(result, line);
	}
	return (result);
}
