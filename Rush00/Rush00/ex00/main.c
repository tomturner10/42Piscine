#include <unistd.h>
extern	void	rush00(int x, int y);
extern	void	rush01(int x, int y);
extern	void	rush02(int x, int y);
extern	void	rush03(int x, int y);
extern	void	rush04(int x, int y);

int	main(void)
{
	write(1, "\n", 1);
	rush00(5, 3);
	rush00(5, 1);
	rush00(1, 1);
	write(1, "\n", 1);
	rush01(5, 3);
	rush01(5, 1);
	rush01(1, 1);
	write(1, "\n", 1);
	rush02(5, 3);
	rush02(5, 1);
	rush02(1, 1);
	write(1, "\n", 1);
	rush03(5, 3);
	rush03(5, 1);
	rush03(1, 1);
	write(1, "\n", 1);
	rush04(5, 3);
	rush04(5, 1);
	rush04(1, 1);
}
