/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 03:00:02 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/04 03:13:29 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checkchar(char str, char const *set)
{
	size_t	j;

	j = 0;
	while (set[j])
	{
		if (set[j] == str)
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || !set)
		return (0);
	while (s1[i] && checkchar(s1[i], set))
		i++;
	if (!(s1[i]))
		return (ft_strdup(""));
	end = ft_strlen(s1) - 1;
	while (end && checkchar(s1[end], set))
		end--;
	str = ft_substr(s1, i, (unsigned int)((end - i) + 1));
	if (!str)
		return (NULL);
	return (str);
}
