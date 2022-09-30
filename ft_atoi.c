/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 20:47:58 by pboonpro          #+#    #+#             */
/*   Updated: 2022/09/30 01:15:23 by pboonpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int	sum;
	int				sign;
	int				count;

	sum = 0;
	sign = 1;
	count = 0;
	if (str)
	{
		while (*str && (*str == 32 || (*str >= 9 && *str <= 13)))
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
			count++;
			if (count > 19)
				return ((sign == -1) ? 0 : -1);
		}
	}
	return (sign * sum);
}
