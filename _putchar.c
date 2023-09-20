#include "main.h"

/**
 * _putchar - prints char
 * @c: c
 * @d: pointer
 */

void	_putchar(char c, int *d)
{
	write(STDOUT_FILENO, &c, 1);
	(*d)++;
}
