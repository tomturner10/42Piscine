int	ft_iterative_factorial(int nb)
{
	int	rtn;

	rtn = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		rtn *= nb;
		nb--;
	}
	return (rtn);
}
