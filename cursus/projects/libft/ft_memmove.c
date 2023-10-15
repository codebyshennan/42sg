/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:46 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:47 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a block of memory from a source location to a destination location.
 *
 * This function ensures that copying occurs correctly, even if the source and
 * destination memory regions overlap. It handles both forward and backward
 * copying to prevent data corruption.
 *
 * @param dest  Pointer to the destination memory location.
 * @param src   Pointer to the source memory location.
 * @param n     Number of bytes to copy.
 *
 * @return      Pointer to the destination memory location (dest).
 *
 * @note        The behavior of this function is similar to the standard
 *              library function memmove.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dest;
	s = (unsigned char *)src;
	if (src < dest)
	{
		while (n--)
			d[n] = s[n];
		return (dest);
	}
	else
		return (ft_memcpy(dest, src, n));
}
