/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:05 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:06 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* ft_putendl_fd:
* Outputs a string followed by a newline character to the specified
* file descriptor.
*
* @param s: The string to be written to the file descriptor.
* @param fd: The file descriptor to which the string should be written.
*
* Note:
* - If 's' is NULL, this function does nothing and returns immediately.
* - Uses the ft_putstr_fd function to write the string to 'fd', followed 
* by a newline character.
*/
void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
