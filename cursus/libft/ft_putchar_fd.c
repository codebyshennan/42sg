/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:00 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:01 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to a specified file descriptor.
 *
 * This function writes the character 'c' to the given file descriptor 'fd'.
 *
 * @param c  The character to be written to the file descriptor.
 * @param fd The file descriptor where the character will be written.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
