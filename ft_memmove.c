/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 17:56:02 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/25 18:28:39 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*pdest;
	char	*psrc;

	pdest = (char *)dest;
	psrc = (char *)src;
	i = 0;
	if (dest < src)
	{
		while (i < n)
		{
			pdest[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (n > i)
		{
			pdest[n - 1] = psrc[n - 1];
			n--;
		}
	}
	return (dest);
}
