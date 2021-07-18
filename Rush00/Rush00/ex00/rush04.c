extern	void	ft_putchar(char c);

void	edge04(int i, int j, int x, int y)
{
	if (i == 0)
	{
		if (j == 0)
			ft_putchar('A');
		else if (j == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (i == y - 1)
	{
		if (j == 0)
			ft_putchar('C');
		else if (j == x - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
	}
}

void	rush04(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			edge04(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
