#include "libft.h"

/*
ft_strtrim allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;

    if (!(s1))
        return (NULL);
    i = 0;
    while (*s1 && ft_strchr(set, *s1))
        s1++;
    i = ft_strlen(s1);
    while (i && ft_strchr(set, s1[i]))
        i--;
    return (ft_substr(s1, 0, i + 1));
}

// int main(void)
// {
//     char    *str = NULL;
//     char    trim[] = "4123";
//     char    *result = ft_strtrim(str, trim);

//     printf("%s\n", result);
//     return (0);
// }