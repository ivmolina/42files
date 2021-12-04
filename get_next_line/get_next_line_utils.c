#include "get_next_line.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	int		i;
	int		j;

	if (!s1 || !s2)
		return ("");
	j = 0;
	i = 0;
	aux = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (aux == NULL)
		return (NULL);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		aux[i] = s2[j];
		j++;
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

int	contains(char *str, char c)
{
	while (*str != c)
		str++;
	if (*str == c)
		return (1);
	return (0);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	while (src[i] && (i < (dstsize - 1)))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*aux;

	i = 0;
	aux = malloc (sizeof(char) * ((int)(ft_strlen(s1) + 1)));
	if (!aux)
		return (NULL);
	while (s1[i])
	{
		aux[i] = s1[i];
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
