NAME = push_swap

SRCS = parse_input.c \
       print_operations.c \
       push_operations.c \
       pushswap.c \
       radix_sort.c \
       sort_smallnum.c \
       swap_operations.c \
       util.c \
       initialize_stack.c\
	   reverse_rotate_operations.c \
	   rotate_operations.c


OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -g -fsanitize=address

HEADERS = pushswap.h

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
