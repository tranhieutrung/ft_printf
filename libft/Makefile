# Source files
SRCS	=	ft_strchr.c		ft_strlen.c

OBJS	=	${SRCS:.c=.o}

HEAD 		= ../includes/

# Library name
NAME	=	libft.a

# Default target
all	:	${NAME}

# Rule to compile source files into object files
%.o: %.c
	cc -Wall -Wextra -Werror -c -I$(HEAD) $< -o $@

# Target to create the library
${NAME}	:	${OBJS}
	ar rcs $@ $^

# Target to clean object files
clean	:
	rm -f ${OBJS}

# Target to clean library and object files
fclean	: clean
	rm -f ${NAME}

# Target to rebuild (clean and build again)
re	: fclean all

# Ensure that 'clean', 'fclean', and 're' are not dependent on actual file names
.PHONY: all clean fclean re