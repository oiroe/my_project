/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:47:58 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/20 14:03:07 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sum;
	int	sign;

	sum = 0;
	sign = 1;
	if (str)
	{
		while (*str == 32 || (*str >= 9 && *str <= 13))
			str++;
		if (*str == '+')
			str++;
		else if (*str == '-')
		{
			sign = -sign;
			str++;
		}
		while (*str >= '0' && *str <= '9')
		{
			sum = (sum * 10) + *str - '0';
			str++;
		}
	}
	return (sign * sum);
}
