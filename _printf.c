#include "main.h"

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

int	_printf(const char *format, ...)
{
	va_list	args;
	int		i;

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
