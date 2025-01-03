NAME = push_swap

SRCS = parse_input.c \
       pushswap.c \
       radix_sort.c \
       sort_small_num.c \
       util.c \
	operations_reverse_rotate.c\
       operations_push.c \
       operations_rotate.c \
       operations_swap.c \
        error.c  \
       node.c \
       init.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
# CFLAGS += -g -fsanitize=address

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
