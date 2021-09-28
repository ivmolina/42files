#include "libft.h"
#include <stdio.h>

void * ft_calloc(size_t count, size_t size)
{
	int i;
	char *aux;

	if (size == 1)
	{
		i = 0;
		aux = (char *) malloc (sizeof(char) * count);
		while (i < count)
		{
			aux[i] = '\0';
			i++;
		}
	}
	else 
	{
		i = 0;
		aux = (int *) malloc (sizeof(int) * count);
		while (i < count)
		{
			aux[i] = 0;
			i++;
		}
	}
}

int main()
{
	float *a = calloc (5,sizeof(float));
	for (int i = 0;i<2;i++)
	{
		a[i] = 4.0;
	}
	printf("%f %f %f %f %f", a[0], a[1], a[2], a[3], a[4]);
}