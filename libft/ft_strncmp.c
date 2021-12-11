/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:40:00 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/09 17:11:22 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (!n)
		return (0);
	n--;
	while (*s1 == *s2 && n && *s1 && *s2)
	{
		++s1;
		++s2;
		n--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
