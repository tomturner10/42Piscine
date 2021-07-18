NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRC:.c=.o}

FLAGS = -c -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${SRCS}
	gcc ${SRCS} -Iincludes ${FLAGS}
	ar cr ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re:
	fclean all

.PHONY all clean fclean re 