/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:55:46 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/20 12:50:56 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*pts;
	size_t		i;

	i = 0;
	pts = (const char *)s;
	while (i < n)
	{
		if (pts[0] == c)
			return ((void *)pts);
		pts++;
		i++;
	}
	return (NULL);
}
