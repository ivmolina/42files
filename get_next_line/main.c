#include "get_next_line.h"
#include <stdio.h>

void leaks(void)
{
	system("leaks a.out");
}

int main(){
	// atexit(leaks);
	int fd = open("file_gnl_easy.txt", O_RDONLY);
	for (int i = 0; i < 6; i++)
		printf("%s", get_next_line(fd));
	close(fd);
	return 0;
}
