/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:19:03 by mande-so          #+#    #+#             */
/*   Updated: 2025/10/29 17:01:03 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src2;
	size_t	i;

	src2 = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src2);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
	i++;
	}
	dst[i] = '\0';
	return (src2);
}
