#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*cpy;

	size = 0;
	while (src[size] != '\0')
		size++;
	cpy = (char *)malloc((size + 1) * sizeof(char));
	if (cpy == NULL)
		return (NULL);
	size = 0;
	while (src[size])
	{
		cpy[size] = src[size];
		size++;
	}
	cpy[size] = '\0';
	return (cpy);
}
