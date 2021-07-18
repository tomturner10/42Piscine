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
	rush01(1, 5);
	rush01(4, 4);
	rush01(5, 3);
	write(1, "\n", 1);
	rush02(4, 1);
	rush02(10, 56);
	rush02(3, 12);
	write(1, "\n", 1);
	rush03(4, 1);
	rush03(10, 56);
	rush03(3, 12);
	write(1, "\n", 1);
	rush04(7, 1);
	rush04(10, 56);
	rush04(3, 12);
}
