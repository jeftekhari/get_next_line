/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:57:19 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:35:10 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	n1;
	int				ilen;

	ilen = ft_numlen(n);
	n1 = n;
	if (n < 0)
	{
		n1 = -n;
		ilen++;
	}
	str = (char*)malloc(sizeof(char) * (ilen + 1));
	if (!str)
		return (NULL);
	str[ilen] = '\0';
	str[--ilen] = n1 % 10 + '0';
	while (n1 /= 10)
		str[--ilen] = n1 % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
