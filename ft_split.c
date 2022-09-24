/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:29:20 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/24 21:06:56 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countstr(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	char	**ptr;

	if (!s || c == '\0')
		return (0);
	ptr = (char **)malloc(sizeof(char) * countstr(s) + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (ptr[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j + 1] == c || s[j + 1] == '\0')
			{
				ptr[i] = ft_substr[s,0,j];
				s + j;
				break ;
			}
			j++;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
