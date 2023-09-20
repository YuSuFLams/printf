#include "main.h"

/**
 * _putstr - prints stirng
 * @s: string
 * @d: len adress
 */
void	_putstr(char *s, int *d)
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
