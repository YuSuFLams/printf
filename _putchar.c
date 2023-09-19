#include "_printf.h"

void	_putchar(char c, int *d)
{
	write(1, &c, 1);
	(*d)++;
}
