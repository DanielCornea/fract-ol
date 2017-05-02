/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:48:16 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/31 16:54:21 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * (len + 1));
	if (!str)
		return ((char *)NULL);
	str[len] = '\0';
	while (i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	return (str);
}
