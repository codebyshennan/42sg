/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:11:52 by shwong            #+#    #+#             */
/*   Updated: 2023/06/28 00:11:54 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	start;
	int	count;

	count = 0;
	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	while (src[count] != '\0')
	{
		dest[start] = src[count];
		count++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}
