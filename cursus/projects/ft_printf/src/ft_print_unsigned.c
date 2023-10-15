/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:57:55 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:38:22 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

/**
 * @brief Calculates the length of an unsigned integer.
 *
 * @param num The unsigned integer to calculate the length of.
 * @return The length of the unsigned integer.
 */
int	ft_num_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief Converts an unsigned integer to a string.
 * 
 * @param n The unsigned integer to be converted.
 * @return A string representation of the unsigned integer.
 *         Returns NULL if memory allocation fails.
 */
char	*ft_uitoa(unsigned int n)
{
	char	*str;
	int		len;

	len = ft_num_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	return (str);
}

/**
 * @brief Prints an unsigned integer to stdout.
 *
 * @param n The unsigned integer to be printed.
 * @return The number of characters printed.
 */
int	ft_print_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_print_char('0'));
	str = ft_uitoa(n);
	len = ft_print_str(str);
	free(str);
	return (len);
}
