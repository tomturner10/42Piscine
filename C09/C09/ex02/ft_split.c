#include <stdlib.h>
#include <stdio.h>

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

int	ft_inset(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1); 
		charset++;
	}
	return (0);
}

int	ft_length(const char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (ft_inset(str[i], charset) == 0 && ft_inset(str[i - 1], charset) == 1)
			count++;
		i++;
	}
	return count + 2;
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	char **rtn;
	char *cpy;

	i = 0;
	j = 0;
	rtn = (char **)malloc(ft_length(str, charset) * sizeof(char *));
	while(str[i] != '\0')
	{
		j = 0;
		while(ft_inset(str[i + j], charset) == 0)
		{
			cpy[j] = str[i + j];
			if (ft_inset(str[i + j + 1], charset) == 1 || str[i + j + 1] == '\0')
				i += j;
			j++;
		}
		
		i++;
	}
	

	

}

int main(int argc, char **argv)
{
	printf("%i", ft_length(argv[1], argv[2]));
	return (0);
}