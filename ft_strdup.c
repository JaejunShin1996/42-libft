#include "libft.h"

char    *ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
    while (str[j])
        j++;
	result = (char *)malloc(sizeof(*result) * (j + 1));
	if (!(result))
		return (NULL);
	while (i < j)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}