# Exit
NAME = libftprintf.a

# Compilation
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Sources
SRC = ft_putnbr.c ft_printf.c ft_putchar_pf.c ft_putnbr_base.c \
	  ft_putnbr_fd_ns.c ft_putstr_pf.c ft_ptr.c ft_strlen.c \
	  

OBJS = $(SRC:.c=.o)

# Linking
INCLUDE = ft_printf.h

$(NAME):$(OBJS) $(INCLUDE)
	ar -rsc $(NAME) $(OBJS)

# Default target for compilation
all: $(NAME)

# Generate .o from respective .c
%.o : %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

# Clean objects
clean:
	rm -f $(OBJS)

# Clean objects and executable
fclean:	clean
	rm -f $(NAME)

# Clean objects and executable and then compilation
re:	fclean all

# Key words
.PHONY: all clean fclean re