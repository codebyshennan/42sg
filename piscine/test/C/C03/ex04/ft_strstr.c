/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:53:58 by shwong            #+#    #+#             */
/*   Updated: 2023/06/28 00:53:59 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	sp;
	int	fp;

	sp = 0;
	if (*to_find == '\0')
	{
		return ((char *) str);
	}
	while (str[sp] != '\0')
	{
		fp = 0;
		while (to_find[fp] != '\0' && str[sp + fp] == to_find[fp])
		{
			if (to_find[fp + 1] == '\0')
			{
				return ((char *) &str[sp]);
			}
			fp++;
		}
		sp++;
	}
	return (NULL);
}
