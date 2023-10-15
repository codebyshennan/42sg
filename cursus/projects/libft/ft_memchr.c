/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:20 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:21 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Searches for the first occurrence of the character c (an unsigned char) 
 * in the first len bytes of the string pointed to by str.
 *
 * @param str The pointer to the memory area to be searched.
 * @param c The character to be located.
 * @param len The number of bytes to be searched.
 *
 * @return This function returns a pointer to the matching byte or NULL if the 
 * character does not occur in the given memory area.
 */
void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ptr = (unsigned char *)str;
	ch = (unsigned char)c;
	while (len--)
	{
		if (*ptr == ch)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
