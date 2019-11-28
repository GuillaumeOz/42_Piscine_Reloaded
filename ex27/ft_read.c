/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 19:02:55 by gozsertt          #+#    #+#             */
/*   Updated: 2019/04/05 19:04:50 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_read(char *argv)
{
	int		fd;
	char	c;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return ;
	while (read(fd, &c, 1) == 1)
		write(1, &c, 1);
	close(fd);
}
