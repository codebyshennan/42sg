/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:36:02 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:36:04 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies up to (size - 1) characters from the null-terminated string src to 
 * dest, null-terminating the result. The source and destination strings should
 * not overlap, as the behavior is undefined. Returns the length of the source 
 * string.
 *
 * @param dest The destination buffer.
 * @param src The source string.
 * @param size The size of the destination buffer.
 * @return The length of the source string.
 */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}
