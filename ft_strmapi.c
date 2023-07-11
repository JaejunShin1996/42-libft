#include "libft.h"

// char    to_a(unsigned int i, char c)
// {
//     c = 'a';
//     return (c);
// }

/*
ft_strmapi takes a string and a function as arguments,
    applies the function ’f’ to each character of the
    string ’s’, and passing its index as first argument
    to create a new string (with malloc(3)) resulting
    from successive applications of ’f’.
*/
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char            *result;
    unsigned int    i;

    result = ft_strdup(s);
    if (result == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        result[i] = f(i, s[i]);
        i++;
    }
    return (result);
}
