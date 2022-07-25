/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 23:42:48 by pboonpro          #+#    #+#             */
/*   Updated: 2022/07/14 13:22:56 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*pc;

	pc = (char *)c;
	i = 0;
	while (s[i] != '\0' && s[i] != pc)
		i++;
	if (s[i] == pc)
		return ((char *)&s[i]);
	return (NULL);
}
