/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:16:19 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:28:24 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;

	b = (char*)big;
	l = (char*)little;
	if (*little == '\0')
		return (b);
	while (*b && len != 0 && len >= ft_strlen(l))
	{
		if (ft_memcmp(l, b, ft_strlen(l)) == 0)
			return (b);
		b++;
		len--;
	}
	return (NULL);
}
