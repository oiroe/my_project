/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:01:07 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/30 15:32:02 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = malloc(sizeof(unsigned char) * len + 1);
	if (ptr == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		ptr[i] == s[start - 1];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
