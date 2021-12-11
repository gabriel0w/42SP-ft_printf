/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:04:53 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/12/11 18:06:06 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_number(va_list args)
{
	char	*str;
	int		i;
	int		n;

	n = va_arg(args, int);
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	str = ft_itoa(n);
	i = write(1, str, ft_strlen(str));
	free(str);
	return (i);
}
