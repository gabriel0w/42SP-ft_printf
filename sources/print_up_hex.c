/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_up_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:05:48 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/12/11 18:08:52 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_up_hex(va_list args)
{
	unsigned int	n;
	unsigned int	copy;
	char			*str;
	int				i[2];
	char			*base;

	i[0] = 1;
	base = "0123456789ABCDEF";
	n = va_arg(args, unsigned long);
	if (n == 0)
		return (write(1, "0", 1));
	copy = n;
	while (copy && i[0]++)
		copy = copy / 16;
	str = malloc(i[0]);
	str[--i[0]] = '\0';
	while (n)
	{
		str[--i[0]] = base[n % 16];
		n /= 16;
	}
	i[1] = write(1, str, ft_strlen(str));
	free(str);
	return (i[1]);
}
