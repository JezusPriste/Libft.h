/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:46:49 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 15:46:53 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	char		*cdst;
	const char	*csrc;

	if (!d && !s && n)
		return (0);
	cdst = d;
	csrc = s;
	while (n > 0)
	{
		*(cdst++) = *(csrc++);
		n--;
	}
	return (d);
}
