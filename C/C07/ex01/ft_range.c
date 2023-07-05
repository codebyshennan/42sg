/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:14:58 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:14:59 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a function ft_range which returns an array of ints. This int array 
	should contain all values between min and max. Min included, max excluded.
*/

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	range = (int *)malloc(sizeof(int) * (max - min));
	if (range == NULL)
	{
		return (0);
	}
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
