/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:03:58 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/22 01:44:23 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	led;
	size_t	les;
	size_t	j;

	led = ft_strlen(dst);
	les = ft_strlen(src);
	if (size < led)
		return (size + les);
	j = 0;
	while (src[j] && led + 1 < size)
	{
		dst[led] = src[j];
		led++;
		j++;
	}
	dst[led] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
