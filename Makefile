SRCS = 

CC = gcc -Wall -Wextra -Werror

NAME = push_swap

all : ${NAME}

clean : 
	rm -f *.0

flcean : clean
	rm -f ${NAME}

re : flcean all

.PHONY : all clean flcean re .c
