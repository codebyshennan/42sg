/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:03 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:04 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function ft_fibonacci that returns the nth 
	element of the Fibonacci sequence, the first element 
	being at the index 0. We’ll consider that the Fibonacci 
	sequence starts like this: 0, 1, 1, 2.
*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
