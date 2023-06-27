#include "libft.h"

/*
ft_putchar_fd outputs the character ’c’ to the given file descriptor.
0 - stdin
1 - stdout
2 - stderr
*/
void    ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);
}