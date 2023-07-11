#include "libft.h"

/*
ft_memmove can handle overlapping cases, when two values in one memory location.
ex) str1 - abcdef, str2 - def ; str2 belongs to str1 but 'a' in str1 is zero index, 'd' is zero too.
*/
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char        *temp;
    const char  *temp2;

    temp = (char *)dest;
    temp2 = (const char *)src;
    while (n--)
    {
        temp[n] = temp2[n];
    }
    return (dest);
}