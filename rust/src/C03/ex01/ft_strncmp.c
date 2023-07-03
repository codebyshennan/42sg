/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:44:33 by shwong            #+#    #+#             */
/*   Updated: 2023/06/27 23:44:35 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;
	int				diff;

	count = 0;
	diff = 0;
	while (count < n)
	{
		if (s1[count] != s2[count])
		{
			return (s1[count] - s2[count]);
		}
		else if (s1[count] == '\0')
		{
			return (0);
		}
		count++;
	}
	return (diff);
}
