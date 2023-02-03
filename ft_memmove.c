/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:47:00 by dborgian          #+#    #+#             */
/*   Updated: 2023/02/01 17:38:20 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	i;

	if (!dst && !src)
		return (NULL);
	i = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d > s)
		while (len-- > 0)
			*(d + len) = *(s + len);
	else
	{
		while (i < len)
		{
			*(d + i) = *(s + i);
			++i;
		}
	}
	return (dst);
}
