/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 16:58:03 by shwong            #+#    #+#             */
/*   Updated: 2023/06/22 22:33:43 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb)
{
	int	length;
	int	is_negative;
	int	start;
	int	end;
	char tmp;
	char	buffer[20];

	length = 0;
	is_negative = 0;
	if (nb == 0)
	{
		buffer[length++] = '0';
	}
	else
	{
		if (nb < 0)
		{
			is_negative = 1;
			nb = -nb;
		}
		while (nb != 0)
		{
			buffer[length++] = '0' + (nb % 10);
			nb /= 10;
		}
		if (is_negative)
		{
			buffer[length++] = '-';
		}
		start = 0;
		end = length - 1;
		while (start < end)
		{
			tmp = buffer[start];
			buffer[start] = buffer[end];
			buffer[end] = tmp;
			start++;
			end--;
		}
	}
	write(1, buffer, length);
}
