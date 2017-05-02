/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 15:27:45 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/24 19:35:08 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *str;
	const unsigned char *str2;

	str = s1;
	str2 = s2;
	while (n > 0)
	{
		if (*str != *str2)
		{
			return ((int)(*str - *str2));
		}
		str++;
		str2++;
		n--;
	}
	return (0);
}
