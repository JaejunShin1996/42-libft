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

// int main(void)
// {
//      char str[] = "Hello, 42, Adelaide";
//      char ch = '4';
//      char *result;

//      result = ft_strrchr(str, ch);
//      printf("%s", result);
//      return (0);
// }