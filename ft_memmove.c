#include "libft.h"

/*
Memmove can handle overlapping cases, when two values in one memory location.
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

// int main(void)
// {
//     char str1[50] = "abcdef";
//     char *str2 = &str1[3];

//     printf("%s\n", str2);
//     ft_memmove(str2, str1, 5);
//     printf("Dest is %s, Source is %s", str2, str1);
//     return (0);
// }