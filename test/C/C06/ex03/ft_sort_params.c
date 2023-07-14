/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:08:59 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:09:01 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// sort n strings by ascii order
/*
	Create a program that displays its given arguments sorted by ascii order.
	bubble sort with strcmp as the algorithm to sort.
	(i) will be 1 as we dont want to sort argv[0]

*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		write(1, &str[current], 1);
		current++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		i++;
		if (diff != 0)
			return (diff);
	}
	return (diff);
}

void	swap_str(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap_str(&argv[i], &argv[j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, &"\n", 1);
		i++;
	}
	return (0);
}