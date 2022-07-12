/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:49:39 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/13 02:32:00 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	unsigned char	*pstr;
	unsigned char	*ptofind;
	size_t			i;
	size_t			j;

	pstr = str;
	ptofind = tofind;
	i = 0;
	j = 0;
	while (pstr[i] && i < len)
	{
		while (pstr[i + j] == ptofind[j])
		{
			if (pstr[i + j] != ptofind[j])
				j = 0;
			j++;
		}
		if (j > 1)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}
