#include <string.h>
#include <stdio.h>
#include "libft.h"

int main(void)
{
	printf("Origen:\n%d\n", memcmp("t\200", "t\0", 2));
	printf("Copia:\n%d\n", ft_memcmp("t\200", "t\0", 2));
}
//printf("Origen:\n%s\n", strdup("string de prueba"));
//printf("Copia:\n%s\n", ft_strdup("string de prueba"));
