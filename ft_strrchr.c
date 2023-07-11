#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    while (*str)
        str++;
    if (*str == c)
        return ((char *)str);
    str--;
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        str--;
    }
    return (NULL);
}