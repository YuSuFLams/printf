#include "_printf.h"

static void	check(char c, va_list args, int *len)
{
	if (c == 'c')
		ft_putchar(va_arg(args, int), len);
	else if (c == 's')
		ft_putstr(va_arg(args, char *), len);
	else if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(args, int), len);
	else if (c == 'u')
		ft_uputnbr(va_arg(args, unsigned int), len);
	else if (c == 'p')
		ft_upointer(va_arg(args, void *), len, 0);
	else if (c == 'x')
		ft_putlowhex(va_arg(args, unsigned int), len);
	else if (c == 'X')
		ft_putupphex(va_arg(args, unsigned int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		ft_putchar(c, len);
}

int	_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	if (write(1, 0, 0))
		return (-1);
	while (*str)
	{
		if (*str != '%')
			ft_putchar(*str, &i);
		else
		{
			str++;
			check(*str, args, &i);
		}
		str++;
	}
	va_end(args);
	return (i);
}
