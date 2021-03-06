/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 18:15:00 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/13 20:34:13 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_islower(unsigned int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
