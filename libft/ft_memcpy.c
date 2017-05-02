/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:50:08 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/30 13:13:32 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *str1;
	char *str2;

	str1 = dst;
	str2 = src;
	if (n == 0 || src == dst)
	{
		return (dst);
	}
	while (n--)
	{
		*str1++ = *str2++;
	}
	str1 = str2;
	return (dst);
}
