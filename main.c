#include <string.h>
#include <stdio.h>
#include "libft.h"
int main(void)
{
	char c[10] = {'s','t','r','i','n','g','\0'};
	char result[1];
	ft_memcpy(result, c, sizeof(c));
	// memcpy(result, c, sizeof(c));
	printf("%s", result);
}
