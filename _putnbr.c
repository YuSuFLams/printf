#include "_printf.h"

void	_putnbr(int nb, int *d)
{
	long	n;

	n = nb;
	if (n < 0)
	{
		_putchar('-', d);
		n *= (-1);
	}
	if (n > 9)
	{
		_putnbr(n / 10, d);
		_putnbr(n % 10, d);
	}
	else
		_putchar(n + 48, d);
}
