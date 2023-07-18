/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:28:10 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/17 18:05:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_substr allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*result;

	size = ft_strlen(s);
	if (len > size)
		len = size;
	if (start > size)
		len = 0;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result || !s)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] && size > start)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
