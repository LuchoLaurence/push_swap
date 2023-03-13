SRCS = push_swap.c 

CC = gcc -Wall -Wextra -Werror

NAME = push_swap

all : ${NAME}

LIB : 
	make -C ./libft

${NAME} : LIB
	$(CC) -I .push_swap.h -o ${NAME} ${SRCS} -L ./libft -lft
clean : 
	make clean -C ./libft

fclean :
	make fclean -C ./libft
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re .c
