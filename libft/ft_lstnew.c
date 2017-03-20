/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 13:58:17 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/19 20:51:56 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *c, size_t content_size)
{
	t_list	*i;

	if (!(i = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (c == NULL)
	{
		i->c = NULL;
		i->content_size = 0;
	}
	else
	{
		if (!(i->c = malloc(content_size)))
		{
			free(i);
			return (NULL);
		}
		ft_memcpy(i->c, c, content_size);
		i->content_size = content_size;
	}
	i->next = NULL;
	return (i);
}
