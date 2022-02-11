#include "push_swap.h"

int is_num(char *arg)
{
	unsigned int	i;

	i = 0;
	while (arg[i] != '\0')
	{
		if (!ft_isdigit(arg[i]))
			return (0);
		i++;
	}
	return (1);
}

int isnt_int(char *arg)
{
	if ((ft_atoi(arg) > INT32_MAX) || (ft_atoi(arg) < INT32_MIN))
		return (1);
	return (0);
}

int error_manager(char **args, int len)
{
	unsigned int	i;

	i = 1;
	while (i < len)
	{
		if (is_num(args[i]) || isnt_int(args[i]))
		{
			ft_printf("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
