/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:55 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:56 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a program that displays its given arguments. One per line, 
	in reverse order.
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	count(char **argv)
{
	int	count;

	count = 1;
	while (*argv[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		i = count(argv);
		while (i >= 1)
		{
			while (*argv[i] != '\0')
			{
				ft_putchar(*argv[i]);
				ft_putchar('\n');
				i--;
			}
		}
	}
	return (0);
}
