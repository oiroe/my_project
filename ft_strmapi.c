/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pboonpro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:35:32 by pboonpro          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/09/19 00:33:55 by pboonpro         ###   ########.fr       */
=======
/*   Updated: 2022/09/04 21:44:34 by pboonpro         ###   ########.fr       */
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*ptr;

<<<<<<< HEAD
	if (s == 0)
=======
	if (s == '\0')
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
		return (0);
	len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == 0)
		return (0);
	i = 0;
	while (s[i])
	{
<<<<<<< HEAD
		ptr[i] = f(i, s[i]);
=======
		ptr[i] == f(i, s[i]);
>>>>>>> df37df8faae117b28c61a49d3fdb35b8ac969bef
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
