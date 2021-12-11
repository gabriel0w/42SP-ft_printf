#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

/**
 * @return return the number of characters printed (excluding the null byte).
*/
int				ft_printf(const char *format, ...);
int				print_char(va_list args);
int				print_number(va_list args);
int				print_pointer(va_list args);
int				print_string(va_list args);
int				print_udecimal(va_list args);
int				print_low_hex(va_list args);
int				print_up_hex(va_list args);
size_t			ft_strlen(const char *string);
char			*ft_strchr(const char *s, int c);
char			*ft_itoa(int n);

#endif