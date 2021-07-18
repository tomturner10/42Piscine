void	ft_ultimate_div_mod(int *a, int *b)
{
	int	at;
	int	bt;

	at = *a / *b;
	bt = *a % *b;
	*a = at;
	*b = bt;
}
