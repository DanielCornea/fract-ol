/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:46:47 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/24 19:41:27 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t	i;

	str = (char *)ft_memalloc(size + 1);
	if (!str)
		return ((char *)NULL);
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return ((char *)str);
	return ((char *)NULL);
}
