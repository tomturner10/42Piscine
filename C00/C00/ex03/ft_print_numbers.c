#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
{
	char	num;

	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
