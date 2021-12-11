#include "../ft_printf.h"

int	print_string(va_list args)
{
	int count;
	char *s;

	count = 0;
	s = va_arg(args, char *);
	if (!s)
		return (write (1, "(null)", (6 * sizeof(char))));
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}
