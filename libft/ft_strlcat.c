/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:14:49 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:26:38 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	int		l;
	int		n;

	n = size;
	d = dst;
	s = (char*)src;
	while (*d && n--)
		d++;
	l = d - dst;
	if (l == (int)size)
		return (size + ft_strlen(src));
	while (*s)
	{
		if (n-- - 1 > 0)
		{
			*d++ = *s;
		}
		s++;
	}
	*d = '\0';
	return (l + (s - src));
}
