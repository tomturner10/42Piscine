#include <unistd.h>
#include <stdio.h>

extern int	g_grid[6][6];
extern char	g_print[6][6];

int	populate_nums(int *nums, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i] != '\0')
	{
		if (i % 2 == 0 && argv[1][i] >= '0' && argv[1][i] <= '4')
		{
			nums[j] = argv[1][i] - 48;
			j++;
		}
		else if (argv[1][i] != ' ')
		{
			write(1, "Error\n", 12);
			return (0);
		}
		i++;
	}
	if (i != 31)
	{
		write(1, "Error\n", 12);
		return (0);
	}
	return (1);
}

void	makegrid(int *nums)
{
	int	x;

	x = 1;
	while (x < 5)
	{
		g_grid[0][x] = nums[x - 1];
		g_grid[5][x] = nums[x + 3];
		g_grid[x][0] = nums[x + 7];
		g_grid[x][5] = nums[x + 11];
		x++;
	}
}

void	printgrid(void)
{
	int	i;
	int	j;

	i = 1;
	while (i < 5)
	{
		j = 1;
		while (j < 5)
		{
			write(1, &g_print[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

void	convertgrid(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 6)
	{
		j = 0;
		while (j < 6)
		{
			g_print[i][j] = g_grid[i][j] + '0';
			j++;
		}
		i++;
	}
}
