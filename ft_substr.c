#include "libft.h"

/*
ft_substr takes a string, starting index and len to be last index to be copied and
allocates the memory to the return value using malloc and size is (len - start).
leaves one memory for null terminator. Copying starts from strat index.
*/
char    *ft_substr(char const *str, unsigned int start, size_t len)
{
    int     i;
    int     size;
    char    *result;

    i = 0;
    size = len - start;
    result = (char *)malloc(sizeof(char) * (size + 1));
    if (!(result) || (!*str))
        return (0);
    while (i < size)
    {
        result[i] = str[start];
        start++;
        i++;
    }
    result[i] = '\0';
    return (result);
}

// int main(void)
// {
//     char main[] = "";
//     char *sub;

//     sub = ft_substr(main, 7, 16);
//     printf("%s\n", sub);
//     return (0);
// }

