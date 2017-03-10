/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 16:27:15 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:41:54 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	size_t	strlen;
	int		i;

	i = 0;
	strlen = ft_strlen(s1);
	while (s2[i] != '\0')
	{
		s1[strlen + i] = s2[i];
		i++;
	}
	s1[strlen + i] = '\0';
	return (s1);
}
