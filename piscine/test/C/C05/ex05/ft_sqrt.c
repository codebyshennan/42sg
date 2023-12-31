/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:08 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:09 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that returns the square root of a number (if it exists), 
	or 0 if the square root is an irrational number.
*/
int	ft_sqrt(int nb)
{
	long	i;

	if (nb <= 0 || nb == 2 || nb == 3)
		return (0);
	if (nb == 1)
		return (1);
	if (nb <= 10000)
		i = 2;
	else if (nb <= 1000000)
		i = 101;
	else if (nb <= 100000000)
		i = 1001;
	else if (nb <= 400000000)
		i = 10001;
	else if (nb <= 1600000000)
		i = 30001;
	else
		i = 40001;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
