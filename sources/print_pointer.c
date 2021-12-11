#include "../ft_printf.h"

int	print_pointer(va_list args)
{
	unsigned long	n;
	unsigned long copy;
	char			*str;
	int				i[2];
	char 			*base;

	i[0] = 1;
	base = "0123456789abcdef";
	n = va_arg(args, unsigned long);
	copy = n;
	if (n == 0)
		return write(1, "0x0", 3);
	i[1] = write(1, "0x", 2);
	while (copy && i[0]++)
		copy = copy / 16;
	str = malloc(i[0]);
	str[--i[0]] = '\0';
	while (n)
	{
		str[--i[0]] = base[n % 16];
		n /= 16;
	}
	i[1] += write(1, str, ft_strlen(str));
	free(str);
	return i[1];
}