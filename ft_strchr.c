/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:18:36 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/30 13:13:00 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	b;

	b = c;
	i = 0;
	while (str[i] != '\0' && str[i] != b)
		i++;
	if (str[i] == '\0' && b != '\0')
		return (NULL);
	return ((char *) str + i);
}
