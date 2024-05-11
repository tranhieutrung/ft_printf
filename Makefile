# DIRECTORIES

SRCS 		= 	./srcs/ft_printf.c		./srcs/ft_putchar.c		\
				./srcs/ft_putstr.c		./srcs/ft_putbase.c		\
				./srcs/ft_putaddr.c		./srcs/ft_putnbr.c		\
				./srcs/ft_putuint.c		./srcs/ft_puthexa.c
OBJS 		= $(SRCS:.c=.o)
HEAD 		= ./includes


# LIBFT

LIBFT_DIR 	= ./libft/
LIBFT 		= ./libft/libft.a

# VARIABLES

NAME		= libftprintf.a
AR			= ar rcs
RM			= rm -f
CC			= cc
CFLAGS 		= -Wall -Wextra -Werror

# TARGETS

all: $(NAME) $(LIBFT)

$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

$(LIBFT):
	@make -C $(LIBFT_DIR)

$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $@ $^

clean:
	@make fclean -C $(LIBFT_DIR)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re