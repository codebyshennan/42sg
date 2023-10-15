/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:17:38 by shwong            #+#    #+#             */
/*   Updated: 2023/10/15 16:33:13 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * This function takes a variable argument list and a format specifier 
 * character and prints the corresponding formatted output. It returns the 
 * number of characters printed.
 * e.g. ft_formats(args, 'c') will print a character from the variable argument	
 *
 * @param args The variable argument list
 * @param format The format specifier character
 * @return The number of characters printed
 */
int	ft_formats(va_list args, const char format)
{
	int	print_len;

	print_len = 0;
	if (format == 'c')
		print_len += ft_print_char(va_arg(args, int));
	else if (format == 's')
		print_len += ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		print_len += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_len += ft_print_nbr(va_arg(args, int));
	else if (format == 'u')
		print_len += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		print_len += ft_print_percent();
	return (print_len);
}

/**
 * @brief This function prints formatted output to stdout according to 
 * the format string.
 * 
 * @param format A pointer to the format string.
 * @param ... A variable number of arguments to be printed according to 
 * the format string.
 * @return int The number of characters printed.
 */
int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;
	int		print_len;

	i = 0;
	print_len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
			print_len += ft_formats(args, format[++i]);
		else
			print_len += ft_print_char(format[i]);
		i++;
	}
	va_end(args);
	return (print_len);
}
