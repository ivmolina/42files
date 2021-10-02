#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char const		*auxsrc;
	char			*auxdst;

	i = 0;
	auxsrc = src;
	auxdst = dst;
	while (i < len)
	{
		auxdst[i] = auxsrc[i];
		i++;
	}
	return (dst);
}