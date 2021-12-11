/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 18:05:26 by gbelo-so          #+#    #+#             */
/*   Updated: 2021/12/11 18:05:27 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	print_string(va_list args)
{
	int		count;
	char	*s;

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
