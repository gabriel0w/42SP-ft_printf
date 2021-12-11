/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:03:38 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/12/11 18:09:38 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	check_argument(char c, va_list args)
{
	int	(*func_array[255])();

	func_array[(int) 'c'] = print_char;
	func_array[(int) 's'] = print_string;
	func_array[(int) 'i'] = print_number;
	func_array[(int) 'd'] = print_number;
	func_array[(int) 'p'] = print_pointer;
	func_array[(int) 'u'] = print_udecimal;
	func_array[(int) 'x'] = print_low_hex;
	func_array[(int) 'X'] = print_up_hex;
	if (c == '%')
		return (write(1, "%", 1));
	return ((*func_array[(int)c])(args));
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;

	i = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && ft_strchr("cspudixX%", *(str + 1)))
		{
			str++;
			i += check_argument(*str, args);
		}
		else
		{
			write(1, str, 1);
			i++;
		}
		str++;
	}
	return (i);
}
