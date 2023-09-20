#include "main.h"

/**
 * _putupphex - print hex
 * @n: hex
 * @d: poitner
 */
void	_putupphex(unsigned int n, int *d)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (n < 16)
		_putchar(base[n], d);
	else
	{
		_putupphex(n / 16, d);
		_putchar(base[n % 16], d);
	}
}
