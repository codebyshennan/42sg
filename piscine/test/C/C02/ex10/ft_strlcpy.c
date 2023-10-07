/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 22:51:32 by shwong            #+#    #+#             */
/*   Updated: 2023/06/26 22:52:12 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The strlcpy() function copies up to size - 1 characters from the NUL-
	terminated string src to dst, NUL-terminating the result.

	strlcpy() and strlcat() take the full size of the buffer (not just the 
	length) and guarantee to NUL-terminate the result (as long as size is larger 
	than 0 or, in the case of strlcat(), as long as there is at least one 
	byte free in dst).
*/
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (i);
}
