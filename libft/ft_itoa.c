/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo-so <gbelo-so@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 02:52:23 by gbelo             #+#    #+#             */
/*   Updated: 2021/12/10 22:56:36 by gbelo-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*return_str(int signal, size_t len, unsigned int n)
{
	char	*str;

	if (n == 0)
		return (ft_strdup("0"));
	str = malloc(len);
	if (!str)
		return (0);
	str[--len] = '\0';
	if (signal > 0)
		str[0] = '-';
	while (n)
	{
		str[--len] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	size_t	len;
	int		signal;
	int		ctrl_nb;

	len = 1;
	signal = 0;
	if (n < 0)
	{
		len++;
		signal = 1;
		n = n * (-1);
	}
	ctrl_nb = n;
	while (ctrl_nb && len++)
		ctrl_nb /= 10;
	return (return_str(signal, len, (unsigned int)n));
}
