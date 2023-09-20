#include "main.h"

/**
 * _uputnbr - prints number
 * @n: number
 * @d: len adress
 */
void	_uputnbr(unsigned int n, int *d)
{
	long	nb;

	nb = n;
	if (nb < 10)
		_putchar(n + 48, d);
	else
	{
		_uputnbr(nb / 10, d);
		_uputnbr(nb % 10, d);
	}
}
