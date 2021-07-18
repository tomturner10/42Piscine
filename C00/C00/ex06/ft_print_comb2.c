#include <unistd.h>

void	ft_print_ints(int i, int j);

void	ft_print_comb2(void);

void	ft_print_ints(int i, int j)
{
	char	nums[5];

	nums[0] = i / 10 + '0';
	nums[1] = i % 10 + '0';
	nums[2] = ' ';
	nums[3] = j / 10 + '0';
	nums[4] = j % 10 + '0';
	write(1, nums, 5);
	if (i + j < 197)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_print_ints(i, j);
			j++;
		}
		i++;
	}
}
