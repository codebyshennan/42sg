/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:15:23 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:15:26 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a function that will concat all the strings pointer by strs separated 
	by sep. size is the number of strings in strs, if size is 0, you must return 
	an empty string that you can free().
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	int		len;
	char	*str;

	i = 0;
	k = 0;
	len = (size - 1) * strlen(sep);
	while (++i < size)
		len += strlen(strs[i]);
	i = 0;
	str = (char *) malloc(sizeof(char) * len + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] && i < size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}
