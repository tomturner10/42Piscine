#include <unistd.h>

void	ft_print_grid(char	**grid, int	size)

{
	int	x;
	int	y;

	y = 0;
	while (y < size + 2)
	{
		x = 0;
		while (x < size + 2)
		{
			if (grid '0')
			{
				write (1, ' ', 1)
			}
				else write (1, grid[y][x] + 48, 1);
				if (x++ < size)
					write (1, ' ', 1);
			}
			write (1, '\n', 1)
			y++;
		}
	}
