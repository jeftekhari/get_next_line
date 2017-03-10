/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:55:56 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:28:00 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*s1;
	int			i;

	i = 0;
	if (s && f)
	{
		s1 = ft_strnew(ft_strlen(s));
		if (s1)
			while (*s)
			{
				s1[i++] = f(*s);
				s++;
			}
		return (s1);
	}
	else
		return (NULL);
}
