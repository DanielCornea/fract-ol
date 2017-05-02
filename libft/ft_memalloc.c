/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 18:38:04 by dcornea           #+#    #+#             */
/*   Updated: 2017/01/22 17:13:57 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if (size < 1)
		return (NULL);
	if (!(m = malloc(sizeof(void) * size)))
		return (0);
	ft_bzero(m, size);
	return (m);
}
