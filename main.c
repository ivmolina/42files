#include <string.h>
#include <stdio.h>
#include "libft.h"

int main()
{
	char	*dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	printf("%zu\n", ft_strlcat(dest, "", 15));
	printf("%s\n", dest);

}
//printf("Origen:\n%s\n", strdup("string de prueba"));
//printf("Copia:\n%s\n", ft_strdup("string de prueba"));
