/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:12:19 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/31 16:56:44 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_white(char c)
{
	if (c == ' ' || c == '\t' || c == '\f' || c == '\v' || c == '\n')
	{
		return (1);
	}
	return (0);
}

int		first_white(char *s)
{
	int i;

	i = 0;
	while (is_white(s[i]))
	{
		i++;
	}
	return (i);
}

int		last_white(char *s)
{
	int i;

	i = ft_strlen(s) - 1;
	while (is_white(s[i]))
	{
		i--;
	}
	return (i + 1);
}

char	*ft_strtrim(char *s)
{
	char	*str;
	int		diff;

	if (!s)
		return (NULL);
	diff = last_white(s) - first_white(s);
	if (diff < 0)
		diff = 0;
	str = (char *)malloc(sizeof(char) * (diff + 1));
	if (!str)
		return ((char *)NULL);
	str[diff] = '\0';
	str = ft_strsub(s, first_white(s), diff);
	return (str);
}
