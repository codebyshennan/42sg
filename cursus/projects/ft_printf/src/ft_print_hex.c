/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:05:28 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:34:23 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num > 0)
	{
		num /= 16;
		len++;
	}
	return (len);
}

/**
 * @brief Recursively prints a hexadecimal number to standard output.
 * 
 * @param num The unsigned integer to be printed in hexadecimal format.
 * @param format The format specifier. If 'x', prints in lowercase. If 'X', 
 * prints in uppercase.
 */
void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num < 10)
			ft_putchar_fd((num + '0'),1);
		else if (format == 'x')
			ft_putchar_fd((num - 10 + 'a'),1);
		else if (format == 'X')
			ft_putchar_fd((num - 10 + 'A'),1);
	}
}

/**
 * @brief Print the hexadecimal representation of an unsigned integer.
 * 
 * @param num The unsigned integer to be printed in hexadecimal format.
 * @param format The format specifier for the hexadecimal representation.
 * @return The length of the hexadecimal representation.
 * 
 * @pre The format specifier must be 'x' or 'X'.
 * @post The hexadecimal representation of the unsigned integer is 
 * printed to stdout.
 */
int	ft_print_hex(unsigned int num, const char format)
{
	int	len;

	len = ft_hex_len(num);
	ft_put_hex(num, format);
	return (len);
}
