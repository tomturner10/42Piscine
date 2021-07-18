#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*rtn;

	i = 0;
	if (max - min <= 0)
	{
		rtn = NULL;
		return (0);
	}
	else
		rtn = (int *)malloc((max - min) * sizeof(int));
	if (rtn == NULL)
		return (-1);
	while (min < max)
	{
		rtn[i] = min;
		i++;
		min++;
	}
	*range = rtn;
	return (i);
}
