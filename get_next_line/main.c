#include "get_next_line.h"
#include <stdio.h>

int main(){
	char *line;
	int fd = open("file_gln.txt", O_RDONLY);
	line=get_next_line(fd);
	printf("%s", line);
	line=get_next_line(fd);
	printf("%s", line);
		line=get_next_line(fd);
	printf("%s", line);
		line=get_next_line(fd);
	printf("%s", line);

	close(fd);
	system("leaks a.out");
	return 0;
}
