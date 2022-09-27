/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:29:20 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/26 16:29:56 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countstr(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

int	wordlen(const char *s, char c, int index)
{
	int	size;

	size = 0;
	while (s[index] && s[index] != c)
	{
		index++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wlen;
	int		word;
	char	**ptr;

	word = countstr(s, c);
	ptr = malloc(sizeof(char *) * (word + 1));
	if (!s || !ptr)
		return (0);
	i = 0;
	j = 0;
	while (i < word)
	{
		while (s[j] == c)
			j++;
		wlen = wordlen(s, c, j);
		ptr[i] = ft_substr(s, j, wlen);
		j += wlen;
		i++;
	}
	ptr[word] = NULL;
	return (ptr);
}
