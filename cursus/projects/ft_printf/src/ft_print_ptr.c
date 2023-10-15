/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 16:05:22 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:34:50 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_ptr_len(uintptr_t num)
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
 * @brief Recursively prints the hexadecimal representation of a pointer address.
 * 
 * @param num The pointer address to print.
 */
void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num < 10)
			ft_putchar_fd((num + '0'),1);
		else
			ft_putchar_fd((num - 10 + 'a'),1);
	}
}

/**
 * @brief Prints a pointer address in hexadecimal format with a leading "0x".
 * 
 * @param ptr The pointer address to print.
 * @return The number of characters printed.
 */
int	ft_print_ptr(unsigned long long ptr)
{
	int	len;

	len = 0;
	ft_putstr("0x");
	len += 2;
	if (ptr == 0)
	{
		ft_putchar_fd('0',1);
		return (len + 1);
	}
	else
	{
		len += ft_ptr_len(ptr);
		ft_put_ptr(ptr);
	}
	return (len);
}
