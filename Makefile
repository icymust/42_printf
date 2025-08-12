NAME = libftprintf.a
MANDATORY = ft_printf.c ft_print_char.c ft_print_str.c
OBJ_PATH = ${MANDATORY:.c=.o}

CC = cc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

$(NAME): ${OBJ_PATH}
	ar rcs ${NAME} ${OBJ_PATH}
all: ${NAME}

clean: 
	${RM} ${OBJ_PATH} ${BONUS_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all
