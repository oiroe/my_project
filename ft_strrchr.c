/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:17:44 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/14 13:29:32 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*pc;

	pc = (char *)c;
	i = ft_strlen(s);
	while (i >= 0 && s[i] != pc)
		i--;
	if (s[i] == pc)
		return ((char *)&s[i]);
	return (NULL);
}
