/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:56:25 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/04 19:57:51 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countlen(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		last;

	i = countlen(n);
	last = countlen(n);
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
		return (0);
	i -= 1;
	while (i >= 0)
	{
		ptr[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	ptr[last] = '\0';
	return (ptr);
}
