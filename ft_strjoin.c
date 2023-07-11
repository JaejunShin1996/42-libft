#include "libft.h"

/*
ft_strjoin takes two strings and put them together using malloc takes lengths of the strings.
*/
char    *ft_strjoin(char const *str1, char const *str2)
{
    char    *result;
    int     i;
    int     j;

    i = 0;
    j = 0;
    result = (char *)malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
    if (!result || !str1 || !str2)
        return (NULL);
    while (str1[i])
    {
        result[i] = str1[i];
        i++;
    }
    while (str2[j])
    {
        result[i + j] = str2[j];
        j++;
    }
    result[i + j] = '\0';
    return (result);
}