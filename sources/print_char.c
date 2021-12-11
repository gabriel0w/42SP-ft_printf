#include "../ft_printf.h"

int	print_char(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (write(1, &c, 1));
}