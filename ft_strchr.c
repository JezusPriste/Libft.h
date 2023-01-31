/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:48:21 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 15:48:24 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
