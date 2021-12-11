/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:37:31 by gbelo             #+#    #+#             */
/*   Updated: 2021/09/10 08:31:08 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	signal;
	int	i;
	int	res;

	res = 0;
	i = 0;
	signal = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		res = (res * 10) + (nptr[i] - '0');
		i++;
	}
	return (res * signal);
}
