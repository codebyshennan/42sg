/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stnay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:47:58 by stnay             #+#    #+#             */
/*   Updated: 2023/07/02 21:48:00 by stnay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ini_table(int **table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		table[i] = (int *) malloc (sizeof(int) * n);
		++i;
	}
}

void	free_table(int **table, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		free(table[i]);
		++i;
	}
	free(table);
}

int	finish_correct_recursion(int *table)
{
	free(table);
	return (1);
}

void	populate_constraints(char *argv, int **input)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			x = (4 * i) + j;
			input[i][j] = argv[x * 2] - '0';
			++j;
		}
		++i;
	}
}

int	check_arg_len(char *input)
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if (input[i] > '4' || input[i] < '1')
			return (0);
		i += 2;
	}
	i = 1;
	while (i < 30)
	{
		if (input[i] != ' ')
			return (0);
		i += 2;
	}
	if (input[i])
		return (0);
	return (4);
}
