/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:26:57 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/12 15:30:42 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
The strnstr() function locates the	first occurrence of the	null-termi-
     nated string little in the	string big, where not more than	len characters
     are searched.  Characters that appear after a `\0'	character are not
     searched.	Since the strnstr() function is	a FreeBSD specific API,	it
     should only be used when portability is not a concern.
*/
char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!(*little))
		return ((char *)big);
	while (len && big[i])
	{
		while (big[i + j] == little[j] && len)
		{
			if (!(little[j + 1]))
				return ((char *)big + (i));
			j++;
			len--;
		}
		len += j - 1;
		i++;
		j = 0;
		len--;
	}
	return (NULL);
}
