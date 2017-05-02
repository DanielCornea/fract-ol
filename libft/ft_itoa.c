/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 18:19:30 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/24 19:48:18 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nbr_size(int nbr)
{
	int i;

	i = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		i++;
	}
	return (i);
}

char	*ft_case_neg(int n, int i)
{
	char	*str1;
	long	m;
	int		k;

	m = (long)n;
	str1 = (char *)ft_memalloc(sizeof(char) * (i + 2));
	if (!str1)
		return ((char *)NULL);
	str1[0] = '-';
	k = i;
	str1[i + 1] = '\0';
	m = m * -1;
	while (m > 0)
	{
		str1[k] = m % 10 + '0';
		m = m / 10;
		k--;
	}
	return (str1);
}

char	*ft_case_pos(int n, int i)
{
	char	*str;
	int		k;

	str = (char *)ft_memalloc(sizeof(char) * i + 1);
	if (!str)
		return ((char *)NULL);
	str[i] = '\0';
	k = i - 1;
	while (n > 0)
	{
		str[k] = n % 10 + '0';
		n = n / 10;
		k--;
	}
	return (str);
}

char	*ft_case_zero(void)
{
	char *str;

	str = (char *)ft_memalloc(sizeof(char) * 2);
	if (!str)
		return ((char *)NULL);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	int i;

	if (n == 0)
	{
		return (ft_case_zero());
	}
	i = nbr_size(n);
	if (n < 0)
		return (ft_case_neg(n, i));
	if (n > 0)
		return (ft_case_pos(n, i));
	return (NULL);
}
