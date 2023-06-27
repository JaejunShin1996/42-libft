#include "libft.h"

/*
ft_putendl_fd outputs the string ’s’ to the given file descriptor followed by a newline.
*/
void    ft_putendl_fd(char *s, int fd)
{
    while (*s)
    {
        ft_putchar_fd(*s, fd);
        s++;
    }
    ft_putchar_fd('\n', fd);
}