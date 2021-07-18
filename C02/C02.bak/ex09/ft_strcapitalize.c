char	*ft_strcapitalize(char *str)
{
	int		i;
	char	last;

	i = 0;
	last = '\n';
	while (str[i] != '\0')
	{
		if (!((last > 96 && last < 123)
				|| (last > 64 && last < 91)
				|| (last > 47 && last < 58)))
		{
			if (str[i] > 96 && str[i] < 123)
				str[i] -= 32;
		}
		else
		{
			if (str[i] > 64 && str[i] < 91)
			{
				str[i] += 32;
			}
		}
		last = str[i];
		i++;
	}
	return (str);
}
