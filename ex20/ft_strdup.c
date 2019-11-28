/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 20:00:37 by gozsertt          #+#    #+#             */
/*   Updated: 2019/04/05 10:42:20 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	str = (char*)malloc(sizeof(char) * (len + 1));
	while (i < len + 1)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
