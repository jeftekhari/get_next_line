/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:36:59 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/09 22:05:55 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int					helper(char **line, t_list *buffsave)
{
	char			*e;

	e = ft_strchr((char*)(buffsave->content), '\n');
	if (e != NULL)
	{
		*e = '\0';
		*line = ft_strdup((char*)(buffsave->content));
		ft_memmove((char*)(buffsave->content), &e[1], ft_strlen(&e[1]) + 1);
		return (1);
	}
	if (0 < ft_strlen((char*)(buffsave->content)))
	{
		*line = ft_strdup((char*)(buffsave->content));
		*(char*)(buffsave->content) = '\0';
		return (1);
	}
	return (0);
}

void	listfunction(t_list *buffsave, int fd)
{
	struct size_t *temp = ft_lstnew(buffsave, fd);

	if (!buffsave->next)
		buffsave->next = ft_lstnew("", fd);
	if (buffsave->next)
	{
		while (buffsave->content_size != fd && buffsave->content_size)
		{
			if (!buffsave->prev)
				buffsave->prev = ft_lstnew(buffsave, fd);
			if (!buffsave->next)
				buffsave->next = ft_lstnew("", fd);
			buffsave = buffsave->next;
			buffsave->prev = temp;
		}
			
			
			

int					get_next_line(const int fd, char **line)
{
	static t_list	*buffsave;
	char			buf[BUFF_SIZE];
	int				check;
	char			*tmp;
	
	if (buffsave->content_size != fd && fd != NULL)
		listfunction(buffsave, fd);
	if (fd < 0 || BUFF_SIZE <= 0)
		return (-1);
	if (buffsave == NULL)
		buffsave = ft_lstnew("", fd);
	while (!ft_strchr((char*)(buffsave->content), '\n'))
	{
		check = read(fd, buf, BUFF_SIZE);
		if (check == 0)
			break ;
		if (check < 0)
			return (-1);
		buf[check] = '\0';
		tmp = ft_strjoin((char*)(buffsave->content), buf);
		ft_strdel((char**)&buffsave->content);
		buffsave->content = tmp;
	}
	return (helper(line, buffsave));
}
/*
int main(int ac, char **av)
{
	int fd;
	char *line = NULL;

	if (ac == 2)
	{

		fd = open(av[1], O_RDONLY);
		get_next_line(fd, &line);
	}
	return (0);
}
*/
