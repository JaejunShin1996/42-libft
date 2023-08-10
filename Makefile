NAME	= libft.a

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

# SRCS 	   = 	*.c

# CFILES	= $(SRCS:%=%.c)

$(NAME): 
	$(CC) $(CFLAGS) -c *.c
	ar rc $(NAME) *.o

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re