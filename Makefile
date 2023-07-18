NAME	= libft.a

CC	= gcc
CFLAGS	= -Wall -Wextra -Werror

SRCS 	   = 	ft_strlen ft_memmove ft_memcpy ft_strlcpy ft_strlcat ft_isalpha ft_isdigit \
				ft_isalnum ft_isascii ft_isprint ft_memset ft_bzero ft_toupper ft_tolower \
				ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi \
				ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_split ft_itoa ft_strmapi \
				ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd 

CFILES	= $(SRCS:%=%.c)
OFILES	= $(SRCS:%=%.o)

$(NAME): 
	$(CC) $(CFLAGS) -c $(CFILES)
	ar rc $(NAME) $(OFILES)

all: $(NAME)

clean:
	rm -f $(NAME)
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re