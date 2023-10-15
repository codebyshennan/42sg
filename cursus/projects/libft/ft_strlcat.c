/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:56 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:56 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates the string pointed to by `src` to the end of the string 
 * pointed to by `dest`. It will append at most `size - strlen(dest) - 1` bytes,
 * null-terminating the result. The source and destination strings should not 
 * overlap, as the behavior is undefined.
 *
 * @param dest - pointer to the destination string
 * @param src - pointer to the source string
 * @param size - size of the destination buffer
 *
 * @return the total length of the string it tried to create, i.e. the initial 
 * length of `dest` + the length of `src`
 */
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	s;
	size_t	d;
	size_t	di;
	size_t	si;

	si = ft_strlen(src);
	if (!dest && size == 0)
		return (si);
	d = ft_strlen(dest);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest[d] = 0;
	return (di + si);
}
