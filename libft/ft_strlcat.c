/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 02:58:23 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/04 02:58:24 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	while (dst[d] && d < size)
		d++;
	while (src[s] && d + s + 1 < size)
	{
		dst[d + s] = src[s];
		s++;
	}
	if (d != size)
		dst[s + d] = '\0';
	return (d + ft_strlen(src));
}
