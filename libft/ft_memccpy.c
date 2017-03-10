/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:39:32 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:39:12 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*dest;
	const char		*sorc;

	dest = dst;
	sorc = src;
	i = 0;
	while (i < n)
	{
		dest[i] = sorc[i];
		if (sorc[i] == c)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
