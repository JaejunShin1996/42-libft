#include "libft.h"

/*
ft_split takes a string and a character and split the string using char
and put them into 2d array.
*/
size_t  words_count(char const *s, char c)
{
    size_t  count;

    count = 0;
    while (*s)
    {
        if (*s != c)
        {
            count++;
            while (*s != c && *s)
                s++;
        }
        s++;
    }
    return (count);
}

char    **ft_split(char const *s, char c)
{
    size_t  size;
    size_t  i;
    size_t  j;
    size_t  k;
    char    **result;

    size = words_count(s, c);
    i = 0;
    j = 0;
    k = 0;
    result = (char **)ft_calloc((size + 1), sizeof(char *));
    while (i < size)
    {
        while (s[j] != c && s[j])
            j++;
        j++;
        if (s[k] != c)
        {
            result[i] = ft_substr(s, k, j - k - 1);
            i++;
        }
        k = j;
    }
    result[i] = NULL;
    return (result);
}