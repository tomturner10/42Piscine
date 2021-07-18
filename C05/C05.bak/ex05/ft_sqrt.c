int	ft_sqrt(int nb)
{
	int	odd;
	int	count;

	odd = 1;
	count = 0;
	while (nb > 0)
	{
		nb -= odd;
		odd += 2;
		count++;
	}
	if (nb == 0)
		return (count);
	else
		return (0);
}
