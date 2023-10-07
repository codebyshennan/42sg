/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:19:28 by shwong            #+#    #+#             */
/*   Updated: 2023/06/28 00:19:29 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				start;
	unsigned int	count;

	count = 0;
	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	while (count < nb && src[count] != '\0')
	{
		dest[start] = src[count];
		count++;
		start++;
	}
	dest[start] = '\0';
	return (dest);
}
