/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/08 13:16:13 by jeftekha          #+#    #+#             */
/*   Updated: 2017/01/31 13:30:11 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*newmem;

	newmem = (void *)malloc(sizeof(void) * size);
	if (newmem == NULL)
		return (NULL);
	ft_bzero(newmem, size);
	return (newmem);
}
