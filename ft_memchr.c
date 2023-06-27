#include "libft.h"

/*
ft_memchr searches for the first occurrence of the character of c in the first n bytes.
*/
void    *ft_memchr(const void *str, int c, size_t n)
{
    char    *temp;

    temp = (char *)str;
    while (n--)
    {
        if (*temp == c)
            return ((void *)temp);
        temp++;
    }
    return (NULL);
}

// int main(void)
// {
//         char str[] = "42 adelaide";
//         char ch = '4';
//         char *result;

//         result = memchr(str, ch, 0);
//         // result = ft_memchr(str, ch, 1);
//         printf("%s", result);
//         return (0);
// }