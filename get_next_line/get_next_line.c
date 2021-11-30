#include "get_next_line.h"

void	freeMem(char *str)
{
	free (str);
}

void	fillLine(int fd, char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\n')
	{
		read(fd, &str[i], 1);
		if (str[i] != '\n')
			i++;
	}
}

char	*get_next_line(int fd)
{
	char	*line;
	char	file[BUFFER_SIZE];
	unsigned int i;

	i = 0;
	
	line = malloc(sizeof(char) * BUFFER_SIZE);
	if (!line)
		return (NULL);
	fillLine(fd, line);
	return (line);
}
