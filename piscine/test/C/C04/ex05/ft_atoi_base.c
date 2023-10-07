/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:07:36 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 17:07:37 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	write a function that converts the initial portion of the string 
	pointed by str to int representation
*/

// string has weird prefixes like '\t', SPACES, '+'
int	get_valid_length(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] <= 32 || str[i] == 127
			|| str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

// find the rebased index of the input
int	index_of_base(char str, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (str == base[index])
		{
			return (index);
		}
		index++;
	}
	return (-1);
}

// sign is after all invalid characters
int	get_sign_and_jump_to_valid(char *str, int *ptr)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	count = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		{
			count *= -1;
		}
		i++;
	}
	*ptr = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	count;
	int	sign;
	int	result;
	int	length;

	result = 0;
	count = 0;
	length = get_valid_length(base);
	if (length >= 2)
	{
		sign = get_sign_and_jump_to_valid(str, &count);
		while (index_of_base(str[count], base) != -1)
		{
			result = (result * length) + index_of_base(str[count], base);
			count++;
		}
		return (result * sign);
	}
	return (0);
}
