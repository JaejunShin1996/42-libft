#include "libft.h"

size_t  words_count(char const *s, char c)
{
    size_t  count;

    count = 0;
    while (*s)
    {
        if (*s == c)
            count++;
        s++;
    }
    return (count + 1);
}

/*
ft_split takes a string and a character and split the string using char
and put them into 2d array.
*/
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
    result = (char **)malloc(sizeof(char *) * (size + 1));
    if (result == NULL)
        return (NULL);
    while (i < size)
    {
        while (s[j] != c && s[j])
            j++;
        j++;
        result[i] = ft_substr(s, k, j - k);
        k = j;
        i++;
    }
    result[i] = "\0";
    return (result);
}

int main(void)
{
    char str[] = "hello 42 school adelaide";
    char sep = ' ';
    char **result = ft_split(str, sep);
    int i = 0;

    while (result[i])
    {
        printf("%s\n", result[i]);
        i++;
    }
    return (0);
}