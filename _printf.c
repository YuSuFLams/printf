#include "main.h"

/**
 * check - check char
 * @args: ---
 * @len: length
 * @c: member c
 */

static void	check(char c, va_list args, int *len)
{
	if (c == 'c')
		_putchar(va_arg(args, int), len);
	else if (c == 's')
		_putstr(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		_uputnbr(va_arg(args, unsigned int), len);
	else if (c == 'p')
		_upointer(va_arg(args, void *), len, 0);
	else if (c == 'x')
		_putlowhex(va_arg(args, unsigned int), len);
	else if (c == 'X')
		_putupphex(va_arg(args, unsigned int), len);
	else if (c == '%')
		_putchar('%', len);
	else
		_putchar(c, len);
}

/**
 * _printf - prints
 * @format: format speci
 * Return: length or -1 if fail
 */

int	_printf(const char *format, ...)
{
	va_list	args;
	int		i;

	if (!format)
		return (-1);
	va_start(args, format);
	i = 0;
	if (write(1, 0, 0))
		return (-1);
	while (*format)
	{
		if (*format != '%')
			_putchar(*format, &i);
		else
		{
			format++;
			check(*format, args, &i);
		}
		format++;
	}
	va_end(args);
	return (i);
}
