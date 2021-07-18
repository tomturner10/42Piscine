#include <unistd.h>

extern int	g_grid[6][6];
extern char	g_print[6][6];

void	solve(void);
int		checkup(int n, int y, int x);
int		checkdown(int n, int y, int x);
int		checkleft(int n, int y, int x);
int		checkright(int n, int y, int x);
void	convertgrid(void);

int	edges(int n, int y, int x)
{
	if (checkup(n, y, x) == 0)
		return (0);
	if (checkdown(n, y, x) == 0)
		return (0);
	if (checkleft(n, y, x) == 0)
		return (0);
	if (checkright(n, y, x) == 0)
		return (0);
	return (1);
}

int	possible(int n, int y, int x)
{
	int	i;

	i = 1;
	while (i < 5)
	{
		if (y != i && g_grid[i][x] == n)
		{
			return (0);
		}
		if (x != i && g_grid[y][i] == n)
		{
			return (0);
		}
		i++;
	}

	if (edges(n, y, x) == 0)
		return (0);
	g_grid[y][x] = n;
	solve();
	g_grid[y][x] = 0;
	return (1);
}

void	solve(void)
{
	int	y;
	int	x;
	int	n;

	y = 1;
	while (y <= 4)
	{
		x = 1;
		while (x <= 4)
		{
			if (g_grid[y][x] == 0)
			{
				n = 1;
				while (n <= 4)
				{
					possible(n, y, x);
					n++;
				}
				return ;
			}
			x++;
		}
		y++;
	}
	convertgrid();
}
