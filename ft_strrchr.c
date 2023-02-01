/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:50:26 by dborgian          #+#    #+#             */
/*   Updated: 2023/02/01 16:10:06 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	c2;

	c2 = c;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (str[i] != c2 && str[i] != str[0])
		i--;
	if (str[i] == str[0] && c2 != str[0])
		return (0);
	return ((char *) str + i);
}
