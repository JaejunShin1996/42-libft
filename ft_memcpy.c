#include "libft.h"

/*
ft_memcpy copies n characters from src to dest.
*/
void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t        i;
    char          *temp;
    const char    *temp2;

    i = 0;
    temp = (char *)dest;
    temp2 = (const char *)src;
    while (i < n)
    {
        temp[i] = temp2[i];
        i++;
    }
    return (dest);
}

// int main(void)
// {
//     char str[50] = "Hello";
//     char dest[50] = "It is Thursday and the weather is shit";
//     ft_memcpy(dest, str, 3);
//     printf("%s", dest);
// }