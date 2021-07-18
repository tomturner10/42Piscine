extern void	ft_putchar(char c);

void	rushlogic(int x, int y, int col, int row)
{
	if ((row == 1 || row == y) && col == 1)
	{
		ft_putchar('A');
	}
	else if (col == x && (row == 1 || row == y))
	{
		ft_putchar('C');
	}
	else if ((row == 1 || row == y) || (col == 1 || col == x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush03(int x, int y)
{
	int		row;
	int		col;

	row = 1;
	col = 1;
	while (row <= y)
	{
		while (col <= x)
		{
			rushlogic(x, y, col, row);
			col++;
		}
		row++;
		col = 1;
		ft_putchar('\n');
	}
}
