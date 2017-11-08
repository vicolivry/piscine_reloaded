/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteractive_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 09:38:51 by volivry           #+#    #+#             */
/*   Updated: 2017/11/07 10:18:06 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iteractive_factorial(int nb)
{
	int	fact;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	fact = nb;
	while (nb > 1)
	{
		nb = nb - 1;
		fact = fact * nb;
	}
	return (fact);
}
