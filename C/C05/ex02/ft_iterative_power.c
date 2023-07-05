/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:07:54 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:07:55 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create an iterated function that returns the value of a power applied to 
	a number. A power lower than 0 returns 0. Overflows do not have to be dealt
	 with. 0 power 0 returns 1.
*/
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (power < 0)
	{
		return (0);
	}
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
