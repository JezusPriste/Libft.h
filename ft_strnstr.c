/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 19:34:50 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/30 16:25:12 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

static int	ft_strcmp(char *a, char *b, size_t pos)
{
	size_t	k;

	k = 0;
	while (a[pos] == b[k] && a[pos] != '\0' && b[k] != '\0')
	{
		pos++;
		k++;
	}
	if (b[k] == '\0')
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	size_n;
	int		b;

	i = 0;
	size_n = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			if ((len - i) >= size_n || size_n == 1)
			{
				b = ft_strcmp((char *) haystack, (char *) needle, i);
				if (b == 1)
					return ((char *) haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
