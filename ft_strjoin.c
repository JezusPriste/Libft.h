/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:48:47 by dborgian          #+#    #+#             */
/*   Updated: 2023/01/31 15:48:49 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lens1;
	int		lens2;
	char	*str;

	lens1 = 0;
	lens2 = 0;
	str = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[lens1] != '\0')
	{
		str[lens1] = s1[lens1];
		lens1++;
	}
	while (s2[lens2] != '\0')
	{
		str[lens1 + lens2] = s2[lens2];
		lens2++;
	}
	str[lens1 + lens2] = '\0';
	return (str);
}
