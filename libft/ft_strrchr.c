/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 17:06:19 by gbelo             #+#    #+#             */
/*   Updated: 2021/09/06 22:11:15 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
		count++;
	if (c == '\0')
		return ((char *)s + (count));
	while (count--)
	{
		if (s[count] == (unsigned char)c)
			return ((char *)s + count);
	}
	return (NULL);
}
