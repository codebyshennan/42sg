/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stnay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:45:48 by stnay             #+#    #+#             */
/*   Updated: 2023/07/02 21:45:49 by stnay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		check_up(int size, int **sol, int col, int expected);
int		check_down(int size, int **sol, int col, int expected);
int		check_left(int size, int **sol, int row, int expected);
int		check_right(int size, int **sol, int row, int expected);
int		sol_correct(int size, int **sol, int **input);
void	populate_constraints(char *argv, int **input);
void	ini_table(int **table, int n);
int		free_table(int **table, int n);
int		finish_correct_recursion(int *table);
int		check_arg_len(char *argv);

void	write_table(int **table, int n)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			c = table[i][j] + '0';
			write(1, &c, 1);
			if (j < n - 1)
				write(1, " ", 1);
			else
				write(1, "\n", 1);
			++j;
		}
		++i;
	}
}

void	ini_possible_values(int size, int **sol, int index, int *possible_val)
{
	int	i;
	int	used;

	i = 0;
	while (i < size)
	{
		possible_val[i] = 1;
		++i;
	}
	i = index / size - 1;
	while (i >= 0)
	{
		used = sol[i][index % size];
		possible_val[used - 1] = 0;
		--i;
	}
	i = index % size - 1;
	while (i >= 0)
	{
		used = sol[index / size][i];
		possible_val[used - 1] = 0;
		--i;
	}
}

int	backtracking(int size, int **sol, int index, int **input)
{
	int	*possible_values;
	int	i;

	possible_values = (int *) malloc (sizeof(int) * size);
	ini_possible_values(size, sol, index, possible_values);
	i = 0;
	while (i < size)
	{
		if (possible_values[i])
		{
			sol[index / size][index % size] = i + 1;
			if (index == size * size - 1)
			{
				if (sol_correct(size, sol, input))
					return (finish_correct_recursion(possible_values));
			}
			else if (backtracking(size, sol, index + 1, input))
				return (finish_correct_recursion(possible_values));
		}
		++i;
	}
	return (0);
}

void	rush_01(char *argv)
{
	int	**input;
	int	**sol;
	int	size;

	size = check_arg_len(argv);
	if (size != 4)
		write(1, "Error\n", 6);
	else
	{
		input = (int **) malloc (sizeof(int *) * size);
		sol = (int **) malloc (sizeof(int *) * size);
		ini_table(input, 4);
		ini_table(sol, 4);
		populate_constraints(argv, input);
		if (backtracking(size, sol, 0, input))
			write_table(sol, size);
		else
			write(1, "Error\n", 6);
		free_table(input, 4);
		free_table(sol, size);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rush_01(argv[1]);
	else
		write(1, "Error\n", 6);
	return (0);
}
