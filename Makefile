NAME = libftprintf.a
MANDATORY = ft_printf.c ft_print_char.c ft_print_str.c ft_check_format.c \
	ft_put_hex.c ft_print_pointer.c ft_print_num.c
OBJ_PATH = ${MANDATORY:.c=.o}

CC = cc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
MAKE = make -C
LIBFT_PATH = libft
LIBFT = ${LIBFT_PATH}/libft.a


.PHONY: all clean fclean re bonus

$(NAME): ${OBJ_PATH}
	${MAKE} ${LIBFT_PATH} all
	cp ${LIBFT} ${NAME}
	ar rcs ${NAME} ${OBJ_PATH}

all: ${NAME}

clean: 
	${MAKE} ${LIBFT_PATH} clean
	${RM} ${OBJ_PATH}

fclean: clean
	${MAKE} ${LIBFT_PATH} fclean
	${RM} ${NAME}

re: fclean all
