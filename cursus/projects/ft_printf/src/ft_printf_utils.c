/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:52:53 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:35:44 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"
#include <stdlib.h>

/**
 * Prints a string to the standard output.
 * 
 * @param str The string to be printed.
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar_fd((str[i++]), 1);
}

/**
 * @brief Prints a string to standard output.
 * If the string is NULL, prints "(null)" instead.
 * 
 * @param str The string to be printed.
 * @return The number of characters printed.
 */
int	ft_print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (str[len])
		ft_putchar_fd(str[len++], 1);
	return (len);
}

/**
 * @brief Prints an integer and returns the number of characters printed.
 * 
 * @param n The integer to be printed.
 * @return int The number of characters printed.
 */
int	ft_print_nbr(int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(n);
	len = ft_print_str(str);
	free(str);
	return (len);
}

/**
 * @brief Prints a percent sign ("%") character to stdout.
 *
 * @return The number of characters printed (always 1).
 */
int	ft_print_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}
