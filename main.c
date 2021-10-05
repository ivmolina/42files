#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	char		str2[] = "bonjour";
	
	printf("Origen:\n%s\n", strchr(str2, '\0'));
	printf("Copia:\n%s\n", ft_strchr(str2, '\0'));
}
//printf("Origen:\n%s\n", strdup("string de prueba"));
//printf("Copia:\n%s\n", ft_strdup("string de prueba"));
