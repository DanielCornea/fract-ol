/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 20:26:16 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/30 13:17:34 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void *src, size_t len)
{
	unsigned char *d1;
	unsigned char *s1;
	unsigned char *temp;

	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	temp = (unsigned char *)malloc(len);
	if (temp)
	{
		ft_memcpy(temp, src, len);
		ft_memcpy(dst, temp, len);
		free(temp);
	}
	return (d1);
}
