# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llaurenc <llaurenc@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 10:25:54 by llaurenc          #+#    #+#              #
#    Updated: 2023/03/17 10:19:06 by llaurenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c  ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_tolower.c ft_strrchr.c ft_toupper.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strcmp.c

OBJS = ${SRCS:.c=.o}

SRCSB = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJSB = ${SRCSB:.c=.o}

CC = gcc -Wall -Wextra -Werror

NAME = libft.a

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f *.o

fclean : clean
	rm -f ${NAME}

re : fclean all

bonus : ${OBJS} ${OBJSB}
	ar rcs ${NAME} ${OBJS} ${OBJSB}

.PHONY : all clean fclean re .c
