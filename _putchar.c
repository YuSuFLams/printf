#include "main.h"

/**
 * _putchar - prints char
 * @c: c
 * @d: pointer
 */

void	_putchar(char c, int *d)
{
	write(1, &c, 1);
	(*d)++;
}
