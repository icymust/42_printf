NAME = libftprintf.a
MANDATORY = ft_printf.c ft_print_char.c ft_print_str.c ft_check_format.c \
	ft_put_hex.c ft_print_pointer.c ft_print_num.c ft_print_unsigned.c
OBJ_PATH = ${MANDATORY:.c=.o}

CC = cc 
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
MAKE = make -C

.PHONY: all clean fclean re 

$(NAME): ${OBJ_PATH}
	ar rcs ${NAME} ${OBJ_PATH}

all: ${NAME}

clean: 
	${RM} ${OBJ_PATH}

fclean: clean
	${RM} ${NAME}

re: fclean all
