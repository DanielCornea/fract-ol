/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcornea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/27 15:55:40 by dcornea           #+#    #+#             */
/*   Updated: 2017/03/01 20:41:22 by dcornea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		read_file(int const fd, char **str, char **line)
{
	char	*tmp;
	char	buf[BUFF_SIZE + 1];
	int		ret;

	while ((tmp = ft_strchr(*str, '\n')) == NULL)
	{
		if ((ret = read(fd, buf, BUFF_SIZE)) > 0)
		{
			buf[ret] = '\0';
			*str = ft_strjoin(*str, buf);
		}
		if (ret == 0)
		{
			if (ft_strlen(*str) == 0)
				return (0);
			*str = ft_strjoin(*str, "\n");
		}
		if (ret < 0)
			return (-1);
		else
			tmp = ft_strchr(*str, '\n');
	}
	*line = ft_strsub(*str, 0, ft_strlen(*str) - ft_strlen(tmp));
	*str = ft_strdup(tmp + 1);
	return (1);
}

int		get_next_line(int const fd, char **line)
{
	int			i;
	static char *str;

	if (fd < 0 || BUFF_SIZE < 1 || !line)
		return (-1);
	if (!(*line = malloc(BUFF_SIZE)))
		return (-1);
	if (str == NULL)
		str = (char *)malloc(sizeof(*str));
	if (!str)
		return (-1);
	*line[0] = '\0';
	while (((i = read_file(fd, &str, line)) != -1))
		return (i);
	return (-1);
}
