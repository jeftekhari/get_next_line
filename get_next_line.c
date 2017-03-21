/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:36:59 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/20 16:12:09 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	ft_listaddb(t_gnl *alst, t_gnl *new)
{
	if (alst != NULL && new != NULL)
	{
		alst->next = new;
		new->prev = alst;
	}
}

t_gnl	*ft_listnew(int fd)
{
	t_gnl *i;

	if (!(i = (t_gnl*)malloc(sizeof(t_gnl))))
		return (NULL);
	i->c = NULL;
	i->fd = fd;
	i->next = NULL;
	return (i);
}

int		helper(char **line, t_gnl *buffsave)
{
	char			*e;

	e = ft_strchr(buffsave->c, '\n');
	if (e != NULL)
	{
		*e = '\0';
		*line = ft_strdup(buffsave->c);
		buffsave->c = ft_strdup(e + 1);
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

t_gnl	*listfunction(t_gnl *buffsave, int fd)
{
	while ((int)buffsave->fd < fd && buffsave)
	{
		if (!buffsave->next)
			ft_listaddb(buffsave, ft_listnew(fd));
		buffsave = buffsave->next;
		if ((int)buffsave->fd == fd)
			return (buffsave);
	}
	while ((int)buffsave->fd > fd && buffsave)
	{
		buffsave = buffsave->prev;
		if ((int)buffsave->fd == fd)
			return (buffsave);
	}
	return (0);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*buffsave;
	char			buf[BUFF_SIZE + 1];
	int				check;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0 || fd >= MAX_FD)
		return (-1);
	if (buffsave && (int)buffsave->fd != fd && fd)
		buffsave = listfunction(buffsave, fd);
	if (buffsave == NULL)
		buffsave = ft_listnew(fd);
	*line = 0;
	while ((check = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[check] = '\0';
		buffsave->c = ft_strjoinfree(buffsave->c, buf, 1);
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	if (check < 0)
		return (-1);
	return (helper(line, buffsave));
}
