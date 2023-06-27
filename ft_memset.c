#include "libft.h"

/*
ft_memset takes a string and replace values with the argument c upto size n from 0.
Void pointer can not let us change the value inside, I create a temp value to copy the str,
and replace the values and return str.
*/
void    *ft_memset(void *str, int c, size_t n)
{
    size_t          i;
    unsigned char   *temp;
    
    i = 0;
    temp = (unsigned char *)str;
    while (i < n)
    {
        temp[i] = c;
        i++;
    }
    return (str);
}

// int main(void)
// {
//     char str[20] = "Hello, 42 Adelaide";
//     memset(str, '$', 25);
//     printf("%s", str);
// }