/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:15:09 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 12:22:16 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i != 0)
	{
		if (s[i] == c)
			return ((char*)(s + i));
		i--;
	}
	if (s[i] == c)
		return ((char*)s);
	return (NULL);
}
