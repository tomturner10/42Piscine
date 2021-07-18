#include <unistd.h>

void	ft_printhex(int digit)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (digit > 16)
	{
		ft_printhex(digit / 10);
		ft_printhex(digit % 10);
	}
	else
	{
		write(1, &hex[digit], 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			write(1, "\\", 1);
			if (str[i] < 16)
				write(1, "0", 1);
			ft_printhex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
