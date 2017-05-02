/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 20:04:19 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/24 19:13:57 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = ft_strnew(ft_strlen((char *)s));
	if (!str)
		return ((char *)NULL);
	ft_strcpy(str, (char *)s);
	return (str);
}
