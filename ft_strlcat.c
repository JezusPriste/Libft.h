/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 14:55:45 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 15:05:47 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

size_t	ft_strlen(const char *s);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstsize2;
	size_t	srcsize;

	dstsize2 = ft_strlen(dst);
	srcsize = ft_strlen(src);
	if (dstsize2 > dstsize || dstsize == 0)
		return (dstsize + srcsize);
	j = ft_strlen(dst);
	i = 0;
	while (src[i] != '\0' && j < dstsize - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (dstsize2 + srcsize);
}
