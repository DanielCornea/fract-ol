/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:01:08 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/30 13:30:57 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *big, char *little)
{
	int i;
	int k;

	i = 0;
	if (ft_strlen(big) == 0 && ft_strlen((char*)little) == 0)
		return (big);
	if (ft_strlen(big) == 0)
		return (NULL);
	k = ft_strlen((char*)little);
	if (k == 0)
		return (big);
	while (big[i] != '\0')
	{
		if (ft_strcmp(ft_strsub(big, i, k), little) == 0)
			return (big + i);
		i++;
	}
	return (0);
}
