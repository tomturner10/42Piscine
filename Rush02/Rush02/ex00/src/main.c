#include "ft.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void	ft_print(int n, t_list *tab, int *first);

unsigned int	getdec(unsigned int nb)
{
	if (nb <= 20)
		return (nb);
	else if (nb > 20)
		return ((nb / 10) * 10);
	else
		return (0);
}

unsigned int	getmult(unsigned int nb)
{
	if (nb >= 1000000000)
		return (1000000000);
	else if (nb >= 1000000)
		return (1000000);
	else if (nb >= 1000)
		return (1000);
	else if (nb >= 100)
		return (100);
	else
		return (getdec(nb));
}

int	ft_onearg(char *nums, int *first)
{
	t_list	*tab;
	int		i;
	printf("hi2");
	i = 0;
	while (nums[i] != '\0')
	{
		if (nums[i] == '.' || nums[i] == '-'
			|| (nums[i] > '9' || nums[i] < '0'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	tab = process("numbers.dict");
	ft_print(ft_atoi(nums), tab, first);
	return (0);
}

int	ft_twoarg(char *nums, char *dict, int *first)
{
	t_list	*tab;
	int		i;
	printf("hi1");
	i = 0;
	while (nums[i] != '\0')
	{
		if (nums[i] == '.' || nums[i] == '-'
			|| (nums[i] > '9' || nums[i] < '0'))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	tab = process(dict);
	ft_print(ft_atoi(nums), tab, first);
	return (0);
}

int	main(int ac, char **av)
{
	int	*first;
	int	addr_first;

	addr_first = 1;
	first = &addr_first;
	if (ac == 2)
	{
		return (ft_onearg(av[1], first));
	}
	if (ac == 3)
	{
		return (ft_twoarg(av[2], av[1], first));
	}
	return (0);
}
