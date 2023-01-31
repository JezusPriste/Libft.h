/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:54:25 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/26 18:57:15 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		k;

	i = 0;
	k = ft_strlen(s1);
	s2 = ((char *)malloc(sizeof(char) * k + 1));
	if (s2 == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
