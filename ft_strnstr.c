#include "libft.h"

/*
The strnstr() function locates the	first occurrence of the	null-termi-
     nated string little in the	string big, where not more than	len characters
     are searched.  Characters that appear after a `\0'	character are not
     searched.	Since the strnstr() function is	a FreeBSD specific API,	it
     should only be used when portability is not a concern.
*/
char    *ft_strnstr(const char	*big, const char *little, size_t len)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!(*little))
        return ((char *)big);
    while (len-- && big[i])
    {
        //Finds the first occurrence of little in big.
        while (big[i] == little[j] && len)
        {
            if (!(little[j + 1]))
                return ((char *)big + (i - j));
            i++;
            j++;
            len--;
        }
        len += j - 1;
        i++;
        j = 0;
    }
    return (NULL);
}