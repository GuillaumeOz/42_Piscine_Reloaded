/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 12:00:31 by gozsertt          #+#    #+#             */
/*   Updated: 2019/04/03 13:50:50 by gozsertt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		nb = -nb;
	if ((nb > 46340 * 46340) || (nb == 0))
		return (0);
	while (i * i < nb)
		i++;
	return (i * i == nb ? i : 0);
}
