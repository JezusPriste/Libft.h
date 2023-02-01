/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:50:43 by dborgian          #+#    #+#             */
/*   Updated: 2023/02/01 16:35:53 by dborgian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	unsigned int	j;

	if (s == NULL)
		return (NULL);
	i = 0;
	j = (unsigned int) len;
	if (ft_strlen(s) <= len)
		sub = (char *) malloc(ft_strlen(s) + 1);
	else
		sub = (char *)malloc(j + 1);
	if (!sub)
		return (NULL);
	if (!((unsigned int) ft_strlen(s) < start))
	{
		while (s[start] != '\0' && i < j)
		{
			sub[i] = s[start];
			i++;
			start++;
		}
	}
	sub[i] = '\0';
	return (sub);
}
