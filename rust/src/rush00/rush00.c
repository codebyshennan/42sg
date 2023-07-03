/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramlee <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 20:47:45 by mramlee           #+#    #+#             */
/*   Updated: 2023/06/27 12:21:56 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	print_x_or_y(int row_count, char a, char b, char y)
{
	if ((row_count == 1) || (row_count == y))
	{
		ft_putchar(x);
	}
	else
	{
		ft_putchar(y);
	}
}

void	print_for_x_more_than_1(int x)
{
	if (x > 1)
	{
		print_x_or_y(row_count, 'o', '|', y);
	}
}

void	run_valid_condition(void)
{
	int	row_count;
	int	column_count;

	row_count = 1;
	column_count = 1;
	while (row_count <= y)
	{
		if ((row_count == 1) || (row_count == y))
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('|');
			while (column_count <= x - 2)
			{
				print_x_or_y(row_count, '-', ' ', y);
				column_count++;
			}
			column_count = 1;
			print_for_x_more_than_1(x);
			ft_putchar('\n');
			row_count++;
		}
	}
}

void	rush(int x, int y)
{
	if (y <= 0 || x <= 0)
	{
		ft_putchar('!');
		ft_putchar('\n');
	}
	else
	{
		run_valid_condition();
	}
}
