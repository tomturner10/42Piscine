int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	while (power > 0)
	{
		power--;
		return (nb * ft_recursive_power(nb, power));
	}
	return (1);
}
