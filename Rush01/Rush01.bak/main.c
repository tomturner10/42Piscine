#include <stdio.h> 
#include <unistd.h>

int g_grid[6][6];
char g_print[6][6];

void makegrid(int *nums);

void solve();

int possible(int n, int y, int x);

int edges(int n, int y, int x);

int checkup(int n, int y, int x);

int checkdown(int n, int y, int x);

int checkleft(int n, int y, int x);

int checkright(int n, int y, int x);

int checkclues(int n, int y, int x);

int main(int argc, char **argv) 
{
	int i;
	int j;
	int k;
	int l;
	int nums[16];
	
	j = 0;
	i = 0;
	k = 0;
	l = 0;
	while (k < 6)
	{
		while (l < 6)
		{
			g_grid[k][l] = 0;
			l++;
		}
		k++;
	}
	while(argv[1][i] != '\0')
	{
		if ( i % 2 == 0 && argv[1][i] >= '0' && argv[1][i] <= '4')
		{
			nums[j] = argv[1][i] - 48;
			j++;
		}
		else if (argv[1][i] != ' ')
		{
			printf("wrong input");
			return 0;
		}
		i++;
	}
	if (i != 31)
	{
		printf("wrong input");
		return 0;
	}
	makegrid(nums);
	solve();
	for(int e = 0; e < 6; e++)
	{
		for(int r = 0; r < 6; r++)
		{
			write(1, &g_print[e][r], 1);
		}
		printf("%c", '\n');
	}
	printf("%c", '\n');
}

void makegrid(int *nums)
{
	int y;
	int x;
	int up;
	int down;
	int left;
	int right;

	y = 0;
	x = 0;
	up = 0;
	down = 4;
	left = 8;
	right = 12;
	while (y < 6)  
	{
		while (x < 6)
		{
			if (y == 0)
			{
				if (x == 0 || x == 5)
					g_grid[y][x] = 0;
				else
					g_grid[y][x] = nums[up++];	 
			}
			else if (y == 5)
			{
				if (x == 0 || x == 5)
					g_grid[y][x] = 0;
				else
					g_grid[y][x] = nums[down++];
			}
			else
			{
				if (x == 0)
					g_grid[y][x] = nums[left++];
				else if (x == 5)
					g_grid[y][x] = nums[right++];
				else
					g_grid[y][x] = 0;
			}
			x++;
		}
		x = 0;
		y++;
	}
}

void solve()
{
	int y;
	int x;
	int n;

	y = 1;
	x = 1;
	n = 1;
	while (y <= 4)
	{
		while (x <= 4)
		{
			if (g_grid[y][x] == 0)
			{  
				n = 1;
				while (n <= 4)
				{
					if(possible(n, y, x) == 1)
					{
						g_grid[y][x] = n;
						solve();
						g_grid[y][x] = 0;
					}
					n++;
				}
				return;
			}
			x++;
		}
		x = 1;
		y++;
	}
	for(int e = 0; e < 6; e++)
	{
		for(int r = 0; r < 6; r++)
		{
			g_print[e][r] = g_grid[e][r] + '0';
		}
	}
 }

int possible(int n, int y, int x)
{
	int i;
	int j;

	i = 1;
	j = 1;
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
	return (1);
}

int edges(int n, int y, int x)
{
	if (checkup(n,y,x) == 0)
		return (0);
	if (checkdown(n,y,x) == 0)
		return (0);
	if (checkleft(n,y,x) == 0)
		return (0);
	if (checkright(n,y,x) == 0)
		return (0);
	return (1);
}

int checkup(int n, int y, int x)
{
	int dist = y - 1;
	int ans = 4 - g_grid[0][x] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkdown(int n, int y, int x)
{
	int dist = 4 - y;
	int ans = 4 - g_grid[5][x] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkleft(int n, int y, int x)
{
	int dist = x - 1;
	int ans = 4 - g_grid[y][0] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkright(int n, int y, int x)
{
	int dist = 4 - x;
	int ans = 4 - g_grid[y][5] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
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
	return (1);
}

int edges(int n, int y, int x)
{
	if (checkup(n,y,x) == 0)
		return (0);
	if (checkdown(n,y,x) == 0)
		return (0);
	if (checkleft(n,y,x) == 0)
		return (0);
	if (checkright(n,y,x) == 0)
		return (0);
	return (1);
}

int checkup(int n, int y, int x)
{
	int dist = y - 1;
	int ans = 4 - g_grid[0][x] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkdown(int n, int y, int x)
{
	int dist = 4 - y;
	int ans = 4 - g_grid[5][x] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkleft(int n, int y, int x)
{
	int dist = x - 1;
	int ans = 4 - g_grid[y][0] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

int checkright(int n, int y, int x)
{
	int dist = 4 - x;
	int ans = 4 - g_grid[y][5] + 2 + dist;
	if(n < ans)
	{
		return (1);
	}
	else
		return (0);
}

