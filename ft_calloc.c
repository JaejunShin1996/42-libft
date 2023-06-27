#include "libft.h"

/*
ft_calloc works like malloc does but it also initialises them to zero.
*/
void    *ft_calloc(size_t nitems, size_t size)
{
    void    *result;
 
    result = malloc(nitems * size);
    if (result == NULL)
        return (NULL);
    ft_bzero(result, nitems * size);
    return (result);
}

// int main(void)
// {
//     char    *result;
//     int     i = 0;
//     size_t size = 6;
    
//     result = ft_calloc(size, sizeof(int));
//     while (i < 24)
//     {
//         printf("%i, ", result[i]);
//         printf("index : %i\n", i);
//         i++;
//     }
//     return (0);
// }