#include <unistd.h>

int	main(int argc, char **argv)
{ 
	int	j;

	j = 0;
	while (argc - 1 > 0)
	{
		j = 0;
		while (argv[argc - 1][j] != '\0')
		{
			write (1, &argv[argc - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
}
