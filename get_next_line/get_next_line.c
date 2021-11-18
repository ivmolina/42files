#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char	*line;

	line = malloc(sizeof(char) * 20);
	while(line != '\n')
		read(fd, line++, 1);
	return (line);
}