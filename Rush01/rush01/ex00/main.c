#include <stdlib.h> 
#include <unistd.h>

int		g_grid[6][6];
char	g_print[6][6];

int		checkargs(int argc, char **argv);
int		populate_nums(int *nums, char **argv);
void	makegrid(int *nums);
void	solve(void);
void	printgrid(void);

int	main(int argc, char **argv)
{
	int	k;
	int	l;
	int	*nums;

	k = 0;
	l = 0;
	nums = (int *)malloc(16 * 4);
	if (checkargs(argc, argv) == 0)
		return (0);
	while (k < 6)
	{
		while (l < 6)
		{
			g_grid[k][l] = 0;
			l++;
		}
		k++;
	}
	if (populate_nums(nums, argv) == 0)
		return (0);
	makegrid(nums);
	solve();
	printgrid();
	free(nums);
}

int	checkargs(int argc, char **argv)
{
	if (argc != 2 || !argv[1][0])
	{
		write(1, "Error\n", 12);
		return (0);
	}
	return (1);
}
