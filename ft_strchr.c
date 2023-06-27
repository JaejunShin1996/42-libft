#include "libft.h"

/*
ft_strchr(const char *str, int c) searches for the first occurrence of the character c 
(an unsigned char) in the string pointed to by the argument str.
*/
char    *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return ((char *)str);
        str++;
    }
    if (*str == c)
        return ((char *)str);
    return (NULL);
}

// int main(void)
// {
//      char str[] = "Hello, 42 Adelaide";
//      char ch = '4';
//      char *result;

//      result = ft_strchr(str, ch);
//      printf("%p\n", result);
//      return (0);
// }