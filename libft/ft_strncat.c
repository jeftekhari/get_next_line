/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 16:44:31 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:32:45 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t strlen;
	size_t i;

	i = 0;
	strlen = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[strlen + i] = s2[i];
		i++;
	}
	s1[strlen + i] = '\0';
	return (s1);
}
