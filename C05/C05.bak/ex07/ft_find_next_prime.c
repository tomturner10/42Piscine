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

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
