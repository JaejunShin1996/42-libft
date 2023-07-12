/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 11:58:46 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/12 22:52:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*temp;

	if (!str)
		return ;
	i = 0;
	temp = (char *)str;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
