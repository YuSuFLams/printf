#ifndef _PRINTF_H
# define _PRINTF_H
# include <stdarg.h>
# include <unistd.h>

void	_putchar(char c, int *d);
void	_putstr(char *s, int *d);
void	_putnbr(int nb, int *d);
void	_upointer(void *p, int *d, int first);
void	_putlowhex(unsigned int n, int *d);
void	_putupphex(unsigned int n, int *d);
void	_uputnbr(unsigned int n, int *d);
int		_printf(const char *str, ...);

#endif
