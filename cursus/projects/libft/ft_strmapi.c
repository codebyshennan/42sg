/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:36:16 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:36:17 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies the function 'f' to each character of the string 's' to create a new
 *  string resulting from successive applications of 'f'.
 *
 * @param s The string to iterate.
 * @param f The function to apply to each character of 's'.
 *
 * @return The string created from the successive applications of 'f'.
 *         NULL if the allocation fails.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	length;
	char			*result;

	if (!s || !f)
		return (NULL);
	length = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
