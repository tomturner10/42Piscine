int	ft_recursive_factorial(int nb)
{
	int	rtn;

	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rtn = nb * ft_recursive_factorial(nb - 1);
		return (rtn);
	}
	return (1);
}
