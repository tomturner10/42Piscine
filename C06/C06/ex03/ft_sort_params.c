#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0' && s1[i] != '\0')
	{
		if (s2[i] != s1[i])
		{
			if (s1[i] < s2[i])
				return (-1);
			else
				return (1);
		}
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	if (s2[i] == '\0' && s1[i] != '\0')
		return (1);
	return (0);
}

void	ft_print(int argc, char **argv)
{
	int	e;
	int	r;

	e = argc - 1;
	r = 0;
	while (e > 0)
	{
		r = 0;
		while (argv[e][r] != '\0')
		{
			write (1, &argv[e][r], 1);
			r++;
		}
		write(1, "\n", 1);
		e--;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{
				temp = argv[j];
				argv[j] = argv[i];
				argv[i] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print(argc, argv);
}
