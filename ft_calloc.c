/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:22:02 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/12 14:32:12 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
ft_calloc works like malloc does but it also initialises them to zero.
*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void	*result;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	result = (void *)malloc(nitems * size);
	if (!result)
		return (NULL);
	ft_memset((unsigned char *)result, 0, nitems * size);
	return (result);
}
