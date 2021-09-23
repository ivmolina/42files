#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

int main()
{
	int fd = open("/home/kali/Desktop/file_test.txt",O_WRONLY);
	ft_putchar_fd('y', fd);
	close(fd);
	return(0);
}