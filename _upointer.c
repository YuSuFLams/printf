#include "_printf.h"

void	_upointer(void *p, int *d, int first)
{
	char			*base;
	unsigned long	n;

	base = "0123456789abcdef";
	n = (unsigned long)p;
	if (first == 0)
		_putstr("0x", d);
	if (n >= 16)
	{
		_upointer((void *)(n / 16), d, 1);
		_putchar(base[n % 16], d);
	}
	else
		_putchar(base[n], d);
}
