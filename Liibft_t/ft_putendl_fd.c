#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n",1);
}
int main()
{
	int fd = open("/home/kali/Desktop/file_test.txt",O_WRONLY);
	ft_putendl_fd("pa brillar tienes que jugar donde yo no este", fd);
	close(fd);
	return(0);
}