/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 14:38:23 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/19 00:38:11 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *dest, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && src[i] == dest[i] && dest[i] && src[i])
	{
		i++;
	}
	return (src[i] - dest[i]);
}
