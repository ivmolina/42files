#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	printf("Origen:\n%s\n", strnstr("lorem ipsum dolor sit amet", "dolor", 15));
	printf("Copia:\n%s\n", ft_strnstr("lorem ipsum dolor sit amet", "dolor", 15));
}
//printf("Origen:\n%s\n", strdup("string de prueba"));
//printf("Copia:\n%s\n", ft_strdup("string de prueba"));
