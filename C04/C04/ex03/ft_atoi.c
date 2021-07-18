#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	chartoint(int negcount, char *num, int len)
{
	int	rtn;
	int	power;

	power = 1;
	rtn = 0;
	while (len > 0)
	{
		rtn += (num[len - 1] - '0') * power;
		power = power * 10;
		len--;
	}
	if (negcount % 2 == 1)
		rtn = -rtn;
	return (rtn);
}

int	ft_atoi(char *str)
{
	int		i;
	int		j;
	int		negcount;
	char	num[10];

	negcount = 0;
	i = 0;
	j = 0;
	while (ft_isspace(str[i] == 1))
		i++;
	if (str[i] == '-' || str[i] == '+' || (str[i] >= '0' && str[i] <= '9'))
	{
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				negcount++;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
			num[j++] = str[i++];
		return (chartoint(negcount, num, j));
	}
	return (0);
}
