/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:36:41 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:36:42 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if a character is in a set of characters.
 *
 * @param c The character to check.
 * @param set The set of characters to check against.
 * @return 1 if the character is in the set, 0 otherwise.
 */
static int	ft_check_set(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * Removes the characters specified in the set from the beginning and end 
 * of the string s1.
 * 
 * @param s1 The string to be trimmed.
 * @param set The set of characters to be removed.
 * 
 * @return A new string with the trimmed characters, or NULL if the 
 * allocation fails.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(((char)s1[size - 1]), set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
