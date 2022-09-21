/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 17:06:54 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/20 17:07:55 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	i;
	size_t			lens1;
	char			*ptr;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	lens1 = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[lens1]))
		lens1--;
	ptr = ft_substr((char *)s1, i, (lens1 - i) + 1);
	return (ptr);
}
