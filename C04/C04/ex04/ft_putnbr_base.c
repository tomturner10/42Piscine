#include <unistd.h>

void	ft_printbase(int nb, char *base, int len)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb > len)
	{
		ft_printbase(nb / 10, base, len);
		ft_printbase(nb % 10, base, len);
	}
	else
	{
		write(1, &base[nb - 1], 1);
	}
}

int	ft_length(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0' && base[i] != '-' && base[i] != '+')
	{
		j = 0;
		while (base [i + j] != '\0')
		{
			if (base[j] == base[i + j + 1])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	l;

	l = ft_length(base);
	if (l == 0 || l == 1)
		return ;
	ft_printbase(nbr, base, l);
}
