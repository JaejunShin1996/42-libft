/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:27:28 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/17 16:27:16 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (str[i])
		i++;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)&str[i]);
	}
	return (NULL);
}
