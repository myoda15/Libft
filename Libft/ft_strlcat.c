/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 10:17:38 by mande-so          #+#    #+#             */
/*   Updated: 2025/11/03 18:13:39 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		j++;
	while ((src[j]) && ((i + j + 1) < size))
	{
		dst[i + j] = src[i];
		j++;
	}
	if (j != size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
