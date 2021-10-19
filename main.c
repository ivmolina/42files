#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>
#include <stdio.h>

int main()
{
	//Test value
	if (ft_atoi("9223372036854775808") == atoi("9223372036854775808"))
		printf("SUCCESS");
	else
		printf("failure");
}
//printf("Origen:\n%s\n", strdup("string de prueba"));
//printf("Copia:\n%s\n", ft_strdup("string de prueba"));
