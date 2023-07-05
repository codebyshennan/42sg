/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:46 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:47 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Write a program that displays its own name, followed by a newline.
*/

#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		while (*argv[0])
		{
			ft_putchar(argv[0]);
			argv[0]++;
		}
	}
	ft_putchar("\n");
	return (0);
}
