extern int	g_grid[6][6];
extern char	g_print[6][6];

int	checkup(int n, int y, int x)
{
	int	dist;
	int	ans;

	dist = y - 1;
	ans = 4 - g_grid[0][x] + 2 + dist;
	if (n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int	checkdown(int n, int y, int x)
{
	int	dist;
	int	ans;

	dist = 4 - y;
	ans = 4 - g_grid[5][x] + 2 + dist;
	if (n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int	checkleft(int n, int y, int x)
{
	int	dist;
	int	ans;

	dist = x - 1;
	ans = 4 - g_grid[y][0] + 2 + dist;
	if (n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int	checkright(int n, int y, int x)
{
	int	dist;
	int	ans;

	dist = 4 - x;
	ans = 4 - g_grid[y][5] + 2 + dist;
	if (n < ans)
	{
		return (1);
	}
	else
		return (0);
}
