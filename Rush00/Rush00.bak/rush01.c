extern	void	ft_putchar(char c);

void	edge01(int i, int j, int x, int y)
{
	if (i == 0)
	{
		if (j == 0)
			ft_putchar('/');
		else if (j == y - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
	}
	else if (i == x - 1)
	{
		if (j == 0)
			ft_putchar('\\');
		else if (j == y - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
	else if (j == 0 || j == y - 1)
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush01(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < x)
	{
		while (j < y)
		{
			edge01(i, j, x, y);
			j++;
		}
		ft_putchar('\n');
		i++;
		j = 0;
	}
}
