/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 03:03:45 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/04 03:06:26 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if ((size_t)(start + len) > ft_strlen(s))
		len = ft_strlen(s) - (size_t)start;
	ptr = malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
