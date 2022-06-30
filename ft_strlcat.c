/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:03:58 by pboonpro          #+#    #+#             */
/*   Updated: 2022/06/30 21:25:22 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		led;
	size_t		les;
	size_t		j;
	size_t		sum;

	sum = 0;
	led = ft_strlen(dst);
	les = ft_strlen(src);
	if (size > led)
		sum = les + led;
	else
		sum = led + size;
	j = 0;
	while (src[j] && led + j < size - 1)
	{
		dst[led + j] = src[j];
		j++;
	}
	dst[led + j] = '\0';
	return (sum);
}
