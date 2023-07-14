/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:13 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:14 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function that returns 1 if the number given as a parameter is a 
	prime number, and 0 if it isnt. Formula for prime is 6k + 1 or 6k - 1 
	(except the multiples of prime numbers)
*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}
