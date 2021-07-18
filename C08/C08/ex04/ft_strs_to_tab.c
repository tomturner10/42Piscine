#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_length(char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
		size++;
	return (size);
}

char	*ft_strdup(char *src)
{
	int		size;
	char	*cpy;

	size = 0;
	while (src[size] != '\0')
		size++;
	cpy = (char *)malloc((size + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	size = 0;
	while (src[size])
	{
		cpy[size] = src[size];
		size++;
	}
	cpy[size] = '\0';
	return (cpy);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	i = 0;
	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		array[i].size = ft_length(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}
