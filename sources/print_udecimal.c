#include "../ft_printf.h"

int	print_udecimal(va_list args)
{
	unsigned int	n;
	unsigned int	copy;
	int				count;
	char			*str;
	int				i;

	n = va_arg(args, unsigned long);
	count = 1;
	if (n == 0)
		return write(1, "0", 1);
	i = 0;
	copy = n;
	while (copy && count++)
		copy = copy / 10;
	str = malloc(count);
	str[--count] = '\0';
	while (n)
	{
		str[--count] = (n % 10) + 48;
		n /= 10;
	}
	i += write(1, str, ft_strlen(str));
	free(str);
	return i;
}