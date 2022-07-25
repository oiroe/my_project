/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 13:55:46 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/14 12:13:03 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*pts;
	unsigned char	*ptc;
	size_t			i;

	i = 0;
	pts = (unsigned char *)s;
	ptc = (unsigned char *)c;
	while (pts[i] && pts[i] != ptc)
		i++;
	if (pts[i] == ptc)
		return (&pts[i]);
	return (NULL);
}
