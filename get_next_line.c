/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:36:59 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/16 21:14:00 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		helper(char **line, t_list *buffsave)
{
	char			*e;

	e = ft_strchr((buffsave->c), '\n');
	if (e != NULL)
	{
		*e = '\0';
		*line = ft_strdup((buffsave->c));
		ft_strdel(&buffsave>c;
		ft_memmove((buffsave->c), &e[1], ft_strlen(&e[1]) + 1);
		return (1);
	}
	if (0 < ft_strlen((buffsave->c)))
	{
		*line = ft_strdup((buffsave->c));
		*(buffsave)->c = '\0';
		return (1);
	}
	return (0);
}

t_list	*listfunction(t_list *buffsave, int fd)
{
	while ((int)buffsave->content_size < fd && buffsave)
	{
		if (!buffsave->next)
			ft_lstaddb(buffsave, ft_lstnew("", fd));
		buffsave = buffsave->next;
		if ((int)buffsave->content_size == fd)
			return (buffsave);
	}
	while ((int)buffsave->content_size > fd && buffsave)
	{
		buffsave = buffsave->prev;
		if ((int)buffsave->content_size == fd)
			return (buffsave);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_list	*buffsave;
	char			buf[BUFF_SIZE + 1];
	int				check;
	char			*tmp;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0 || (read(fd, 0, 0) == 0))
		return (-1);
	if (buffsave && (int)buffsave->content_size != fd && fd)
		buffsave = listfunction(buffsave, fd);
	if (buffsave == NULL)
		buffsave = ft_lstnew("", fd);
	while (!ft_strchr((buffsave->c), '\n'))
	{
		ft_bzero(buf, BUFF_SIZE + 1);
		check = read(fd, buf, BUFF_SIZE);
		if (check == 0)
			break ;
		if (check < 0 && !*buf)
			return (-1);
		tmp = ft_strjoin((buffsave->c), buf);
		ft_strdel(&buffsave->c);
		buffsave->c = tmp;
	}
	return (helper(line, buffsave));
}
