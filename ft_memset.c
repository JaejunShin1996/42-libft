/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaejunshin <jaejunshin@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:09:24 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/11 19:25:45 by jaejunshin       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_memset takes a string and replace values 
    with the argument c upto size n from 0.
*/
void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;

	i = 0;
	temp = (unsigned char *)str;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (str);
}
