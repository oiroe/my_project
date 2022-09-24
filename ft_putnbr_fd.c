/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 22:16:38 by pboonpro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/20 13:22:49 by pboonpro         ###   ########.fr       */
=======
/*   Updated: 2022/09/16 20:11:40 by pboonpro         ###   ########.fr       */
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
<<<<<<< HEAD
=======
	{
		ft_putchar_fd("-", fd);
		n *= (-1);
	}
	if (n > 9)
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb <= 9)
		ft_putchar_fd(nb + 48, fd);
}
