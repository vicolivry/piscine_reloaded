/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:23:29 by volivry           #+#    #+#             */
/*   Updated: 2017/11/07 17:41:54 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
