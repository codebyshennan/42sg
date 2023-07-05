/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:07:38 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:07:40 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create an iterated function that returns a number. 
	This number is the result of a factorial operation 
	based on the number given as a parameter.
*/
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
