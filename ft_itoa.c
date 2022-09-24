/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 19:56:25 by pboonpro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/20 14:24:47 by pboonpro         ###   ########.fr       */
=======
/*   Updated: 2022/09/18 15:42:57 by pboonpro         ###   ########.fr       */
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countlen(int n)
{
<<<<<<< HEAD
	int				i;
	unsigned int	nb;

	i = 0;
	if (n < 0)
	{
		nb = n * (-1);
		i++;
	}
	else if (n == 0)
		return (1);
	else
		nb = n;
	while (nb > 0)
	{
		nb /= 10;
=======
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
<<<<<<< HEAD
	char			*ptr;
	int				i;
	int				last;
	unsigned int	nb;
=======
	char	*ptr;
	int		i;
	int		last;
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef

	i = countlen(n);
	last = i;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == 0)
		return (0);
<<<<<<< HEAD
	if (n < 0)
		nb = n * (-1);
	else
		nb = n;
	i -= 1;
	while (i >= 0)
	{
		ptr[i] = (nb % 10) + 48;
		nb /= 10;
		i--;
	}
	if (n < 0)
		ptr[0] = '-';
=======
	i -= 1;
	while (i >= 0)
	{
		ptr[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
	ptr[last] = '\0';
	return (ptr);
}
