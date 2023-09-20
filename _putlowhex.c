#include "main.h"

void	_putlowhex(unsigned int n, int *d)
{
	char	*base;

	base = "0123456789abcdef";
	if (n < 16)
		_putchar(base[n], d);
	else
	{
		_putlowhex(n / 16, d);
		_putchar(base[n % 16], d);
	}
}
