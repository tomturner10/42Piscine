#include <stdlib.h>
int	ft_length(int size, char **strs, char *sep)
{
	int	l;
	int	i;
	int	j;

	l = 0;
	i = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j++] != '\0')
			l++;
		j = 0;
		if (i != size - 1)
			while (sep[j++] != '\0')
				l++;
		i++;
	}
	return (l);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*rtn;
	int		i;
	int		j;
	int		len;

	rtn = (char *)malloc(ft_length(size + 1, strs, sep) * sizeof(char));
	if (rtn == NULL)
		return (NULL);
	i = 0;
	j = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			rtn[len++] = strs[i][j++];
		j = 0;
		if (i != size - 1)
			while (sep[j] != '\0')
				rtn[len++] = sep[j++];
		i++;
	}
	rtn[len] = '\0';
	return (rtn);
}
