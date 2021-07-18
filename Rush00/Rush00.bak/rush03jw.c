#include	<unistd.h>

void	rush03(int x, int y)
{
	int		row;
	int		col;
	int		i;

	row = 1;
	col = 1;
	while (row <= x)
	{
		while (col <= y)
		{
			if ((row == '1' || row == x) && col == '1')
			{
				write(1, "A", 1);
			}
			else if ((row == '1' || row == x) || (col == '1' || col == y))
			{
				write(1, "B", 1);
			}
			else if (col == y && ((row == '1' || row == x)))
			{
				write(1, "C", 1);
			}
			else
			{
				write(1, " ", 1);
			}
		i++;
		col++;
			if (col == y)
			{
				if (row == x)
				{
					break;
				}
				col = 1;
				row++;
			}
		}
	}
}
