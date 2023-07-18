/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:03:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/17 16:54:35 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memchr searches for the first occurrence 
	of the character of c in the first n bytes.
*/
void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*temp;

	temp = (unsigned char *)str;
	while (n--)
	{
		if (*temp == (unsigned char)c)
			return ((void *)temp);
		temp++;
	}
	return (NULL);
}
