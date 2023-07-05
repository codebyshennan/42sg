/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:50 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:08:51 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a program that displays its given arguments. It will display all
	 the arguments, except argv[0].
*/
#include <unistd.h>

void	ft_putchar(char *c)
{
	write(1, c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{
		while (*argv[i] != '\0')
		{
			ft_putchar(argv[i]);
			argv[i]++;
		}
	}
	ft_putchar("\n");
	return (0);
}
