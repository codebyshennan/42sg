/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:31:39 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:31:42 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Converts an unsigned integer to a string and stores it in a 
 * character array.
 * 
 * This function takes an unsigned integer, converts it to a string and stores
 *  it in a character array.
 * The resulting string is stored in reverse order in the character array.
 * 
 * @param s The character array to store the resulting string.
 * @param number The unsigned integer to be converted to a string.
 * @param len The length of the resulting string.
 * 
 * @return The character array containing the resulting string.
 */
static char	*ft_convert_int_to_char(char *s, unsigned int number, long int len)
{
	while (number > 0)
	{
		s[len--] = '0' + (number % 10);
		number /= 10;
	}
	return (s);
}

/**
 * @brief Returns the length of an integer as a string, including the sign.
 *
 * @param n The integer to get the length of.
 * @return The length of the integer as a string, including the sign.
 */
static int	ft_int_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
 * @brief Converts an integer to a string.
* The ft_itoa() function converts an integer to a string.
* The function allocates memory for the string and returns a pointer to it.
* If the allocation fails, the function returns NULL.
* If the integer is negative, the string will start with a '-' sign.
* If the integer is non-negative, the string will not have a sign.
* The function assumes that the input integer is within the range of int 
data type.
*
* @param	n		The integer to be converted to a string.
* @return			A pointer to the string representation of the integer.
*/
char	*ft_itoa(int n)
{
	char			*str_array;
	long int		len_of_int;
	unsigned int	number;
	int				sign;

	sign = 1;
	len_of_int = ft_int_len(n);
	str_array = (char *)malloc(sizeof(char) * (len_of_int + 1));
	if (!str_array)
		return (NULL);
	str_array[len_of_int--] = '\0';
	if (n == 0)
		str_array[0] = '0';
	if (n < 0)
	{
		sign = -1;
		number = n * sign;
		str_array[0] = '-';
	}
	else
		number = n;
	str_array = ft_convert_int_to_char(str_array, number, len_of_int);
	return (str_array);
}
