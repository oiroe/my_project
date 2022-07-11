/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:55:46 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/12 01:09:46 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pts;
	size_t			i;

	i = 0;
	pts = s;
	while (pts[i] && pts[i] != c)
		i++;
	if (pts[i] == c)
		return (&pts[i]);
	return (NULL);
}
