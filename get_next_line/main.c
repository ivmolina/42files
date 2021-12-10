#include "get_next_line.h"
#include <stdio.h>

int main(){
	int fd = open("file_gln.txt", O_RDONLY);
	printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	// printf("%s", get_next_line(fd));
	close(fd);
	// system("leaks a.out");
	return 0;
}
