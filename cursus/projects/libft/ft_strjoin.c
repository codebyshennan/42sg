/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:35:50 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:35:51 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings s1 and s2 into a new string.
 *
 * @param s1 The first string to concatenate.
 * @param s2 The second string to concatenate.
 *
 * @return The new string that is the result of concatenating s1 and s2, or 
 * NULL if either s1 or s2 is NULL or if memory allocation fails.
 */
char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!new)
		return (NULL);
	while (s1[i])
	{
		new[i] = s1[i];
		i += 1;
	}
	while (s2[j])
	{
		new[i] = s2[j];
		j += 1;
		i += 1;
	}
	new[i] = '\0';
	return (new);
}
