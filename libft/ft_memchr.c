/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 14:32:35 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/30 13:24:38 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*str;
	size_t		ion;

	ion = 0;
	str = (const char *)s;
	while (ion < n)
	{
		if (str[ion] == (char)c)
		{
			return ((void *)str + ion);
		}
		else
			ion++;
	}
	return (NULL);
}
