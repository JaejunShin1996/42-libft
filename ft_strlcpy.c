#include "libft.h"

/*
The strlcpy() function copies up to size - 1 characters 
from the NUL-terminated string src to dst, NUL-terminating the result.
*/
size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;

    i = 0;
    if (size == 0)
    {
        while (src[i])
            i++;
        return (i);
    }
    while ((size-- > 1) && (src[i]))
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    i = 0;
    while (src[i])
        i++;
    return (i);
}

// int main(void)
// {
//     char src[] = "Hello 42 school";
//     char buffer[] = "Ludwig Wittgenstein";
//     int result;

//     result = ft_strlcpy(buffer, src, 0);
//     // result = strlcpy(buffer, src, 0);
//     printf("Dest = %s, %d", buffer, result);
//     return (0);
// }