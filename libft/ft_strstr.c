/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:15:19 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:28:52 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	char	*b;
	char	*l;

	b = (char*)big;
	l = (char*)little;
	if (*little == '\0')
		return (b);
	while (*b)
	{
		if (ft_memcmp(l, b, ft_strlen(l)) == 0)
			return (b);
		b++;
	}
	return (NULL);
}
