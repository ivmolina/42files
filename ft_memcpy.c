#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	char const		*auxsrc;
	char			*auxdst;

	i = 0;
	auxsrc = src;
	auxdst = dst;
	while (i < n)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}