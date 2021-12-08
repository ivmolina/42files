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

char *fillLine(char *file, char *line, int fd)
{

}


char	*get_next_line(int fd)
{
	static char	*file;

	file = malloc(sizeof(char) * BUFFER_SIZE);
	if (!file)
		return (NULL);
}
