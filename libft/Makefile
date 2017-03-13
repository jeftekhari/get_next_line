# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jeftekha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/09 14:02:00 by jeftekha          #+#    #+#              #
#    Updated: 2017/01/31 12:20:59 by jeftekha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = \
ft_memchr.c \
ft_putstr.c \
ft_striteri.c \
ft_strnstr.c \
ft_atoi.c \
ft_memcmp.c \
ft_putstr_fd.c \
ft_strjoin.c \
ft_strrchr.c \
ft_bzero.c \
ft_memcpy.c \
ft_strcat.c \
ft_strlcat.c \
ft_strstr.c \
ft_isalnum.c \
ft_memdel.c \
ft_strchr.c \
ft_strlen.c \
ft_strsub.c \
ft_isalpha.c \
ft_memmove.c \
ft_strclr.c \
ft_strmap.c \
ft_strtrim.c \
ft_strsplit.c \
ft_exwrd.c \
ft_cntwrd.c \
ft_isascii.c \
ft_memset.c \
ft_strcmp.c \
ft_strmapi.c \
ft_swap.c \
ft_isdigit.c \
ft_putchar.c \
ft_strcpy.c \
ft_strncat.c \
ft_tolower.c \
ft_isprint.c \
ft_putendl.c \
ft_putchar_fd.c \
ft_strdel.c \
ft_strncmp.c \
ft_numlen.c \
ft_toupper.c \
ft_itoa.c \
ft_putendl_fd.c \
ft_strdup.c \
ft_strncpy.c \
ft_memalloc.c \
ft_putnbr.c \
ft_strequ.c \
ft_strnequ.c \
ft_memccpy.c \
ft_putnbr_fd.c \
ft_striter.c \
ft_strnew.c \
ft_lstnew.c \
ft_lstdelone.c \
ft_lstadd.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstdel.c \
ft_list_push_back.c \

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SOURCE)
	ar rcs $(NAME) $(SOURCE:.c=.o)
	ranlib $(NAME)

clean:
	/bin/rm -rf $(SOURCE:.c=.o)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
