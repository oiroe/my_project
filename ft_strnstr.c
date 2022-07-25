/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 00:49:39 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/14 13:23:58 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	char	*pstr;
	char	*ptofind;
	size_t	i;
	size_t	j;

	pstr = (char *)str;
	ptofind = (char *)tofind;
	i = 0;
	while (pstr[i] && i < len)
	{
		j = 0;
		while (pstr[i + j] == ptofind[j])
		{
			if (pstr[i + j] != ptofind[j])
				break ;
			j++;
		}
		if (j > 1)
			return (&pstr[i]);
		i++;
	}
	return (NULL);
}
