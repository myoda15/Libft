/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mande-so <mande-so@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:09:55 by mande-so          #+#    #+#             */
/*   Updated: 2025/10/29 13:22:35 by mande-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*mapi;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	mapi = malloc(sizeof(char) * (len + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapi[i] = f(i, s [i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
