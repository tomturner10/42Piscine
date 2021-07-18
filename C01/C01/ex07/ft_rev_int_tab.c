void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	char	swap;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
