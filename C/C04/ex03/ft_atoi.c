/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:09:37 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 17:09:39 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a function that converts the initial portion
 of the string pointed to by str to int representation.
The string can start with an arbitrary amount of + and 
- signs, - sign will change the sign of the int returned
 based on the number of - is even or odd.
*/

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32 || str[i] == '+'
			|| str[i] == '-') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			result = result * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	return (result * sign);
}
