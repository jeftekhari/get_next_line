/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/27 13:30:24 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:28:18 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**result;
	char	*src;
	size_t	wc;
	size_t	lc;

	if (!s)
		return (NULL);
	src = (char*)s;
	wc = ft_cntwrd(src, c);
	if (!(result = (char**)malloc(sizeof(char*) * (wc + 1))))
		return (NULL);
	while (wc-- >= 1)
	{
		lc = 0;
		while (*src == c && *src)
			src++;
		while (src[lc] != c && src[lc] != '\0')
			lc++;
		*result = ft_strsub(src, 0, lc);
		result++;
		src += lc;
	}
	*result = 0;
	return (result - (ft_cntwrd((char*)s, c)));
}
