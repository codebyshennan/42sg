/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:28 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:29 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of 'c' (converted to a char) in the
 * string 's'.
 * The ft_strchr() function locates the first occurrence of 'c' (converted to 
 * a char) in the string 's'.
 * The function returns a pointer to the located character, or NULL if the 
 * character does not appear in the string.
 *
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the located character, or NULL if the character does not
 *  appear in the string.
 */
char	*ft_strchr(char const *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (*str == (char)c)
		return ((char *)str);
	else
		return (NULL);
}
