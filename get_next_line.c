/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:36:59 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/14 21:49:42 by jeftekha         ###   ########.fr       */
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
		buffsave->c = ft_strdup(e + 1);
	//	ft_memmove((char*)(buffsave->content), &e[1], ft_strlen(&e[1]) + 1);
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
	char			buf[BUFF_SIZE];
	int				check;
	char			*tmp;

	if (line == NULL || fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (buffsave && (int)buffsave->content_size != fd && fd)
		buffsave = listfunction(buffsave, fd);
	if (buffsave == NULL)
		buffsave = ft_lstnew("", fd);
	while ((check = read(fd, buf, BUFF_SIZE)))
//	while (!ft_strchr((buffsave->c), '\n'))
	{
//		check = read(fd, buf, BUFF_SIZE);
		if (check == 0)
			break ;
		if (check < 0)
			return (-1);
		buf[check] = '\0';
		tmp = ft_strjoin((buffsave->c), buf);
		ft_strdel(&buffsave->c);
		buffsave->c = tmp;
	}
	return(helper(line, buffsave));
}
/*
int    main(int ac, char **av)
{
    int fd;
    char    *line = NULL;
   
    if (ac >= 2)
    {
        fd = open(av[1], O_RDONLY);
        get_next_line(fd, &line);
        get_next_line(fd, &line);
    }
    return (0);
}
*/
