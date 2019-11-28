/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:02:55 by gozsertt          #+#    #+#             */
/*   Updated: 2019/04/06 12:48:11 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *tab;
	int	i;
	int len;

	i = 0;
	len = min;
	if (min >= max)
		return (tab = NULL);
	while (len < max)
		len++;
	len -= min;
	tab = (int*)malloc(sizeof(int) * len);
	while (i < len)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
