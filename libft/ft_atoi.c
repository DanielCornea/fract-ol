/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/21 17:48:06 by dcornea           #+#    #+#             */
/*   Updated: 2017/02/01 16:23:22 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isblank1(const char *nptr)
{
	int m;

	m = 0;
	while ((nptr[m] == '\n') || (nptr[m] == '\t') || (nptr[m] == '\v') ||
			(nptr[m] == ' ') || (nptr[m] == '\f') || (nptr[m] == '\r') ||
			(nptr[m] == '+'))
		m++;
	return (m);
}

long	ft_atoi_neg(const char *nptr, int i)
{
	long	nbr;

	i = i + 1;
	nbr = 0;
	while (ft_isdigit(nptr[i]))
	{
		nbr = nptr[i] - '0' + nbr * 10;
		i++;
	}
	return (nbr * -1);
}

int		ft_atoi_pos(const char *nptr, int i)
{
	int	nbr;

	nbr = 0;
	while (ft_isdigit(nptr[i]))
	{
		nbr = nptr[i] - '0' + nbr * 10;
		i++;
	}
	return (nbr);
}

int		ft_atoi(const char *nptr)
{
	int i;

	i = ft_isblank1(nptr);
	if (ft_strlen((char *)nptr) == 0 || !nptr)
	{
		return (0);
	}
	if (nptr[i] == '-')
	{
		return (int)(ft_atoi_neg(nptr, i));
	}
	else
	{
		return (ft_atoi_pos(nptr, i));
	}
}
