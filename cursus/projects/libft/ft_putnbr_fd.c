/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:10 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:11 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Outputs an integer to the specified file descriptor.
 *
 * This function takes an integer `n` and an integer file descriptor `fd` as
 * parameters and writes the integer `n` to the file descriptor `fd`.
 * It handles both positive and negative integers and uses recursion to
 * output each digit of the integer to the file descriptor.
 *
 * @param n  The integer to be written to the file descriptor.
 * @param fd The file descriptor where the integer will be written.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
	else
		ft_putchar_fd(nb + '0', fd);
}
