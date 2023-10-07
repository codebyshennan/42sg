/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:53 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:54 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memset - Fill memory with a constant byte
 *
 * This function fills the first 'n' bytes of the memory pointed to by 's'
 * with the constant byte 'c'.
 *
 * @param s     A pointer to the memory to be filled.
 * @param c     The byte value to be written.
 * @param n     The number of bytes to be filled.
 *
 * @return      A pointer to the original memory 's'.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}
