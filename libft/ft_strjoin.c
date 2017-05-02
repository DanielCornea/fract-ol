/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:12:21 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/30 13:43:03 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		s;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	s = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	str = (char *)ft_memalloc(sizeof(char) * s + 1);
	if (!str)
		return ((char *)NULL);
	while (i < ft_strlen((char *)s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < ft_strlen((char *)s2))
	{
		str[i++] = s2[j];
		j++;
	}
	str[s] = '\0';
	return (str);
}
