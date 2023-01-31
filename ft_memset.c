/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:47:08 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 15:47:11 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*buf;

	buf = (unsigned char *) b;
	while (len-- > 0)
	{
		*(buf++) = (unsigned char) c;
	}
	return (b);
}
