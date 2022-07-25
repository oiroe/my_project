/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:37:48 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/14 12:17:24 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*pb;
	unsigned char	*pc;

	pb = (unsigned char *)b;
	pc = (unsigned char *)c;
	i = 0;
	while (i < len)
	{
		pb[i] = pc;
		i++;
	}
	return (b);
}
