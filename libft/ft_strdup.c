/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 03:58:00 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:24:36 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;

	str = (char *)malloc(sizeof(*str) * (ft_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	return (ft_strcpy(str, src));
}
