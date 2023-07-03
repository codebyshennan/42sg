/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 01:21:02 by shwong            #+#    #+#             */
/*   Updated: 2023/06/28 01:21:08 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	start;
	unsigned int	count;

	count = 0;
	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	while (src[count] != '\0' && start < size)
	{
		dest[start] = src[count];
		count++;
		start++;
	}
	dest[start] = '\0';
	return (sizeof(dest));
}
