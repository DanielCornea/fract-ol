/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 16:57:17 by dcornea           #+#    #+#             */
/*   Updated: 2017/02/01 15:34:43 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_etoile(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

int		nr_words(char *s, char c)
{
	int	i;
	int	wds;

	i = 0;
	wds = 0;
	while (s[i] != '\0')
	{
		if (!is_etoile(s[i], c) && (is_etoile(s[i + 1], c) || s[i + 1] == '\0'))
		{
			wds++;
		}
		i++;
	}
	return (wds);
}

int		is_end(char *s, char c, int i)
{
	if (!is_etoile(s[i], c) && (is_etoile(s[i + 1], c) || s[i + 1] == '\0'))
		return (1);
	return (0);
}

int		is_begin(char *s, char c, int i)
{
	if (!is_etoile(s[i], c) && i == 0)
		return (1);
	if (is_etoile(s[i - 1], c) && !is_etoile(s[i], c))
		return (1);
	return (0);
}

char	**ft_strsplit(char *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	str = (char **)ft_memalloc(sizeof(char *) * (nr_words(s, c) + 1));
	if (!str)
		return (0);
	while (i < ft_strlen(s))
	{
		if (!is_etoile(s[i], c))
		{
			j = i;
			while (!is_end(s, c, j))
				j++;
			if (is_end(s, c, j))
				str[k++] = ft_strsub(s, i, j - i + 1);
			i = j;
		}
		i++;
	}
	return (str);
}
