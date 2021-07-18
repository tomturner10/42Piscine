#ifndef FT_H
# define FT_H

typedef struct s_list
{
	unsigned int		nb;
	char	*val;
}		t_list;

unsigned int	ft_atoi(const char *str);
char			*ft_strdup(char *src);
void			ft_putstr(char *str);
char			*ft_getnb(int datasize);
char			*ft_getval(int datasize, char *c);
t_list			*process(char *file);

#endif
