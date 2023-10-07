/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:32 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:33 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies 'n' bytes from the memory area pointed to by 'src' to the 
 * memory area pointed to by 'dest'. 
 * If 'dest' and 'src' overlap, the behavior of this function is undefined. 
 * It returns a pointer to 'dest'.
 *
 * @param dest: Pointer to the destination memory area.
 * @param src:  Pointer to the source memory area.
 * @param n:    Number of bytes to copy.
 *
 * @return: Pointer to the destination memory area ('dest').
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	i = 0;
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
