/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:30:48 by mande-so          #+#    #+#             */
/*   Updated: 2025/10/27 15:44:48 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total;
	unsigned char	*s;

	total = nmemb * size;
	s = ((unsigned char *)malloc(total));
	if (s == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < total)
		{
			s[i] = 0;
			i++;
		}
	return ((void *)s);
	}
}
