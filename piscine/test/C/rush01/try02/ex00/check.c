/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stnay <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 21:47:14 by stnay             #+#    #+#             */
/*   Updated: 2023/07/02 21:47:16 by stnay            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_up(int size, int **sol, int col, int expected)
{
	int	i;
	int	pov;
	int	tallest;

	pov = 0;
	tallest = 0;
	i = 0;
	while (i < size)
	{
		if (tallest < sol[i][col])
		{			
			tallest = sol[i][col];
			++pov;
		}
		++i;
	}
	if (pov != expected)
		return (0);
	return (1);
}

int	check_down(int size, int **sol, int col, int expected)
{
	int	i;
	int	pov;
	int	tallest;

	pov = 0;
	tallest = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (tallest < sol[i][col])
		{			
			tallest = sol[i][col];
			++pov;
		}
		--i;
	}
	if (pov != expected)
		return (0);
	return (1);
}

int	check_left(int size, int **sol, int row, int expected)
{
	int	i;
	int	pov;
	int	tallest;

	pov = 0;
	tallest = 0;
	i = 0;
	while (i < size)
	{
		if (tallest < sol[row][i])
		{			
			tallest = sol[row][i];
			++pov;
		}
		++i;
	}
	if (pov != expected)
		return (0);
	return (1);
}

int	check_right(int size, int **sol, int row, int expected)
{
	int	i;
	int	pov;
	int	tallest;

	pov = 0;
	tallest = 0;
	i = size - 1;
	while (i >= 0)
	{
		if (tallest < sol[row][i])
		{			
			tallest = sol[row][i];
			++pov;
		}
		--i;
	}
	if (pov != expected)
		return (0);
	return (1);
}

int	sol_correct(int size, int **sol, int **input)
{
	int	i;
	int	j;
	int	correct;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < size)
		{
			if (i == 0)
				correct = check_up(size, sol, j, input[i][j]);
			else if (i == 1)
				correct = check_down(size, sol, j, input[i][j]);
			else if (i == 2)
				correct = check_left(size, sol, j, input[i][j]);
			else
				correct = check_right(size, sol, j, input[i][j]);
			if (!correct)
				return (0);
			++j;
		}
		++i;
	}
	return (1);
}
