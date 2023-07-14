/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:52:26 by shwong            #+#    #+#             */
/*   Updated: 2023/06/26 22:53:07 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a fn that displays a string of chars onscreen. If this string 
	
	contains characters that aren't printable, they'll have to be displayed in
	the shape of hexadecimals (lowercase), preceded by a backslash.

	Strategy:
	1. convert non-printable characters into hexadecimal representation
	e.g. \n == 0A in hexadecimal
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_hex(int nbr)
{
	int		base_len;
	char	*base;

	base_len = 16;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr >= base_len)
	{
		convert_to_hex(nbr / base_len);
		convert_to_hex(nbr % base_len);
	}
	else
	{
		ft_putchar(base[nbr]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			if (str[i] < 16)
			{
				ft_putchar('\\');
				ft_putchar('0');
				convert_to_hex(str[i]);
			}
			else
			{
				ft_putchar('\\');
				convert_to_hex(str[i]);
			}
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
