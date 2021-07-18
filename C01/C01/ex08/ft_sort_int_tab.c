void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	int	sorted;

	i = 0;
	j = 0;
	sorted = 0;
	while (i < size - 1 && sorted == 0)
	{
		sorted = 1;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				swap = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = swap;
				sorted = 0;
			}
			j++;
		}
		j = 0;
		i++;
	}
}
