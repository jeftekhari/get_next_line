/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exwrd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 12:01:30 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:30:12 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_exwrd(char *dst, char *src, char c)
{
	char	*dst1;
	size_t	i;

	dst1 = (char*)ft_memalloc(sizeof(char) * (ft_strlen(src) + 1));
	i = 0;
	while (*src)
	{
		if (src[i] == c || src[i] == 0)
			i++;
		while (src[i] != c || src[i] != 0)
		{
			dst1[i] = dst[i];
			i++;
		}
	}
	dst1[i] = '\0';
	return (dst1);
}
