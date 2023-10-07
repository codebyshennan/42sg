/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:15:28 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:15:30 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** LIBRARY: N/A
** SYNOPSIS: split string, with specified character as delimiter, into an array
**			of strings
**
** DESCRIPTION:
** 		Allocates (with malloc(3)) and returns an array of strings obtained by
**	splitting ’s’ using the character ’c’ as a delimiter. The array must be
**	ended by a NULL pointer.
*/

#include <stdlib.h>

// returns 1 if c is in charset
int	is_delimiter(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i] && set[i] != c)
		i++;
	if (set[i] == '\0')
		return (0);
	else
		return (1);
}

// counts number of strings
int	count_strings(char *str, char *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], set))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && !is_delimiter(str[i], set))
			i++;
	}
	return (count);
}

// count string length until hit delimiter
int	ft_strlen_delim(const char *str, char *set)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!is_delimiter(str[i], set))
			i++;
		else
			break ;
	}
	return (i);
}

// malloc and duplicate the word found
char *ft_dup_word(const char *str, char *set)
{
	int		i;
	char	*result;
	int		length;

	i = 0;
	length = ft_strlen_delim(str, set);
	result = (char *)malloc(length + 1);
	while (i < length)
	{
		result[i] = str[i];
		i++;
	}
	result = '\0';
	return (result);
}

// scans the string and extract words, discarding the delimiters
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**strings;

	i = 0;
	count = 0;
	strings = (char **)malloc(sizeof(char *) * \
									(count_strings(str, charset) + 1 ));
	while (str[i])
	{
		while (str[i] && is_delimiter(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			strings[count] = ft_dup_word(&str[i], charset);
			count++;
		}
		while (str[i] && !is_delimiter(str[i], charset))
			i++;
	}
	strings[count] = NULL;
	return (strings);
}
