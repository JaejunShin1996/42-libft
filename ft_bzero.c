#include "libft.h"

/*
Takes a string and assign first n bytes of pointer value with zero bytes.
*/
void    ft_bzero(void *str, size_t n)
{
    ft_memset(str, 0, n);
}