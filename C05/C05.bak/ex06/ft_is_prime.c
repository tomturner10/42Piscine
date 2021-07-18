int	ft_is_prime(int nb)
{
	int	odd;

	odd = 3;
	if (nb == 2)
		return (1);
	if (nb % 2 == 0 || nb == 1 || nb == 0)
		return (0);
	while (odd != nb)
	{
		if (nb % odd == 0)
			return (0);
		odd += 2;
	}
	return (1);
}
