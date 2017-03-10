/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:56:03 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:51:19 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s1;
	int		i;
	int		y;

	i = 0;
	y = 0;
	if (s && f)
	{
		s1 = ft_strnew(ft_strlen(s));
		if (s1)
			while (*s)
			{
				s1[i++] = f(y++, *s);
				s++;
			}
		return (s1);
	}
	else
		return (NULL);
}
