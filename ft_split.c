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

int	countstr(char const *s, char c)
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
	int	word;
	char	**ptr;

	if (!s || c == '\0')
		return (0);
	word = countstr(s, c);
	ptr = (char **)malloc(sizeof(char) * word + 1);
	if (!ptr)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
		{
			ptr[i] = ft_substr(s, 0, i);
			s += i;
			break ;
		}
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
