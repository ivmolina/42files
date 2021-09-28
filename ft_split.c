#include "libft.h"
#include <stdio.h>
static int delimit (char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static void	fill(char const *s, char c, char **tab)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while ((j < delimit(s,c)) && s[k])
	{
		while ((s[k] != c) && s[k])
		{
			tab[j][i] = s[k]; 
			i++;
			k++;
		}
		tab[j][i] = '\0';
		j++;
		i = 0;
		k++;
	}
}

char	**ft_split(char const *s, char c)
{
	int 	i;
	char	**string;

	i = 0;
	string = malloc (sizeof(char*) * delimit(s, c));
	while (i < delimit(s,c))
	{
		string[i] = malloc (sizeof(char) * ft_strlen(s));
		i++;
	}
	if (string == NULL)
		return (NULL);
	fill(s,c,string);
	i = 0;
	while (i < delimit(s,c))
	{
		free(string[i]);
		i++;
	}
	free(string);
	return (string);
}
