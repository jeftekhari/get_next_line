/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 16:31:02 by jeftekha          #+#    #+#             */
/*   Updated: 2017/02/09 20:48:55 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*a;

	a = *begin_list;
	if (*begin_list == '\0')
		*begin_list = ft_newtet(data);
	else
	{
		while (a->next)
			a = a->next;
		a->next = ft_newtet(data);
	}
}
