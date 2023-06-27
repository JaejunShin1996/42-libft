#include "libft.h"

/*
ft_strlcat appends a string onto the end of another. 
*/
size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t  i;
    size_t  j;
    size_t  result;

    i = 0;
    j = 0;
    result = 0;
    //Finds the last index of dst and make sure it is less than the size.
    while (dst[i] && (i < dstsize))
        i++;
    //concatonates from src while it is less than the size and a space for null.
    while ((i + j + 1) < dstsize && src[j])
    {
        dst[i + j] = src[j];
        j++;
    }
    //if i is less than the size, null is not copied.
    if (i < dstsize)
        dst[i + j] = '\0';
    //Gets len of src.
    while (src[result])
        result++;    
    result += i;
    return (result);
}

// int main(void)
// {
//     char dest[50] = "Hello";
//     char src[] = "42 school";
//     size_t result;
    
//     // result = ft_strlcat(dest, src, 20);
//     result = strlcat(dest, src, 20);

//     printf("%s, %zu", dest, result);
// }