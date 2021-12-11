/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbelo <gbelo-so@student.42sp.org.br>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 02:56:37 by gbelo             #+#    #+#             */
/*   Updated: 2021/10/26 22:42:02 by gbelo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**brain(const char *s, char c, char **substr, size_t i)
{
	size_t	k;
	size_t	l;

	k = 0;
	l = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			while (s[i] && s[i] != c)
			{
				k++;
				i++;
			}
			substr[l] = ft_substr(s, (i - k), k);
			if (!substr[l])
				return (0);
			l++;
		}
		else
			i++;
		k = 0;
	}
	substr[l] = NULL;
	return (substr);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	j;
	char	**substr;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
			j++;
		i++;
	}
	i = 0;
	substr = malloc((j + 1) * sizeof(char *));
	if (!substr)
		return (0);
	return (brain(s, c, (char **)substr, i));
}
