#include <unistd.h>

void	ft_print_comb(void);

void	ft_print_num(char i, char j, char k);

void	ft_print_num(char i, char j, char k)
{
	char	num[3];

	num[0] = i;
	num[1] = j;
	num[2] = k;
	write(1, num, 3);
	if (i + j + k < 168)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_print_num(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
