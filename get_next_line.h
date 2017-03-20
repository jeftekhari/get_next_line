/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/02 09:37:33 by jeftekha          #+#    #+#             */
/*   Updated: 2017/03/20 11:39:56 by jeftekha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

# define BUFF_SIZE 16

typedef struct		s_gnl
{
	struct s_gnl	*next;
	struct s_gnl	*prev;
	char			*c;
	int				fd;
}					t_gnl;

int					get_next_line(const int fd, char **line);

#endif
