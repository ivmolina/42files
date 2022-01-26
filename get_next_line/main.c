#include "get_next_line.h"
#include <stdio.h>

int main(){
	int fd = open("file_manifiesto.txt", O_RDONLY);
	for (int i = 0; i < 50; i++)
		printf("%s", get_next_line(fd));

	close(fd);
	// system("leaks a.out");
	return 0;
}
