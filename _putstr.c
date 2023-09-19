#include "_printf.h"

void	putstr(char *s, int *d)
{
	if (!s)
		_putstr("(null)", d);
	else
	{
		while (*s)
		{
			_putchar(*s, d);
			s++;
		}
	}
}
