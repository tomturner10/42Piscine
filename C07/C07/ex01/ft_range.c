#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	if (max - min <= 0)
	{
		return (NULL);
	}
	else
		array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
