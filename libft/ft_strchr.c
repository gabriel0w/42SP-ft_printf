/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:42:51 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/09 17:09:44 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == (unsigned char)c)
			return ((char *)s + count);
		count++;
	}
	if (c == '\0')
		return ((char *)s + (count));
	return (NULL);
}
