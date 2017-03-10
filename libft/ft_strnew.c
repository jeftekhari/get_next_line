/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:54:43 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:29:58 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newmem;
	size_t	i;

	i = 0;
	newmem = (char*)malloc(sizeof(char) * size + 1);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, size + 1);
	return (newmem);
}
