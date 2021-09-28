#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	char			*saux;

	i = 0;
	saux = s;
	while (i < n)
	{
		if (c == saux[i])
			return ((saux + i));
		i++;
	}
	return (0);
}