/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:26 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:27 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare memory regions s1 and s2 for the first n bytes.
 *
 * @param s1    Pointer to the first memory region.
 * @param s2    Pointer to the second memory region.
 * @param n     Number of bytes to compare.
 *
 * @return      0 if the first n bytes of s1 and s2 are equal.
 *              A negative or positive integer if s1 is less than or greater
 *              than s2, respectively, in the first differing byte.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
