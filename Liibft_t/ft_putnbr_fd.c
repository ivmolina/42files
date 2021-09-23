#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	int x;
	char c;

	x = 1;
	while (x * 10 < n)
		x *= 10;
	while (x > 0)
	{
		c = (n / x) + 48;
		write(fd, &c, 1);
		n = n - ((n / x) * x);
		x = x / 10;
	}
}

int main()
{
	int fd = open("/home/kali/Desktop/file_test.txt",O_WRONLY);
	ft_putnbr_fd(85254, fd);
	close(fd);
	return(0);
}