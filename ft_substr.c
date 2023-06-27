#include "libft.h"

/*
ft_substr allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    int     i;
    int     size;
    char    *result;

    i = 0;
    result = (char *)malloc(sizeof(char) * (len + 1));
    if (!(result) || start > ft_strlen(s))
        return (0);
    while (i < len && s[i])
    {
        result[i] = s[start + i];
        i++;
    }
    result[i] = '\0';
    return (result);
}

// int main(void)
// {
//     char main[] = "hello 42 school";
//     char *sub;

//     sub = ft_substr(main, 2, 10);
//     printf("%s\n", sub);
//     return (0);
// }

