/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 22:03:06 by gbelo             #+#    #+#             */
/*   Updated: 2021/09/07 20:41:15 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	n = 0;
	if (*needle == 0)
		return ((char *)haystack);
	if (len == 0)
		return (0);
	while (haystack[h] && h <= len)
	{
		while (haystack[h + n] && haystack[h + n] == needle[n]
			&& n + h < len)
			n++;
		if (ft_strlen(needle) == n)
			return ((char *)haystack + h);
		h++;
		n = 0;
	}
	return (0);
}
