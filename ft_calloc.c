/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:36:25 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 12:57:01 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_bzeroed(void *b, size_t len)
{
	unsigned int	i;

	i = 0;
	while (len-- > 0)
	{
		((unsigned char *)b)[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *) malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzeroed(p, count * size);
	return (p);
}
