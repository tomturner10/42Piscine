#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

char	*ft_getnb(int datasize)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		exit(1);
	i = 0;
	read(datasize, c, 1);
	while (c[0] == '\n')
		read(datasize, c, 1);
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(datasize, c, 1);
		i++;
	}
	return (str);
}

char	*ft_getval(int datasize, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	if (str == NULL)
		exit(1);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(datasize, c, 1);
		i++;
	}
	return (str);
}

t_list	*process(char *file)
{
	int		i;
	int		datasize;
	char	c[1];
	t_list	*tab;
	char	*tmp;

	tab = malloc(sizeof(t_list) * 33);
	datasize = open(file, O_RDONLY);
	if (datasize == -1 || tab == NULL)
		exit(1);
	i = 0;
	while (i < 32)
	{
		tab[i].nb = ft_atoi(ft_getnb(datasize));
		read(datasize, c, 1);
		while (c[0] == ' ' || c[0] == ':')
			read(datasize, c, 1);
		tmp = ft_getval(datasize, c);
		tab[i].val = ft_strdup(tmp);
		free(tmp);
		i++;
	}
	close(datasize);
	return (tab);
}
