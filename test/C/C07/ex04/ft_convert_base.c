/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:15:28 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:15:30 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Create a fn that returns the result of the conversion of the string
	`nbr` from a base `base_from` to a base `base_to`
	The number represented by `nbr` must fit inside an `int`.
	If a base is wrong, NULL should be returned
	The returned number must be prefixed only by a single and uniq '-' if
	nec., no whitespaces, no '+'
*/
#include <stdio.h>
#include <stdlib.h>

// check for valid radix and return
int	check_radix(char *radix);

// translate the string to int according to base
long	ft_atoi_base(char *str, char *base);

// strdup
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dest = (char *)malloc(i + 1);
	if (!dest)
		return (0);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// converts nbr to the new base string
// long to cater for smallest negative number
char	*ft_putnbr_base(long lnbr, char *base)
{
	char	buffer[34];
	int		radix;
	int		i;
	int		sign;

	radix = check_radix(base);
	buffer[33] = '\0';
	sign = 1;
	i = 32;
	if (lnbr < 0)
	{
		sign = -1;
		lnbr *= -1;
	}
	while (lnbr / radix)
	{
		buffer[i] = base[lnbr % radix];
		i--;
		lnbr /= radix;
	}
	buffer[i] = base[lnbr];
	if (sign == -1)
		i--;
	if (sign == -1)
		buffer[i] = '-';
	return (ft_strdup(&buffer[i]));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	lnbr;
	char	*result;

	if (!check_radix(base_from) || !check_radix(base_to))
		return (NULL);
	lnbr = ft_atoi_base(nbr, base_from);
	result = ft_putnbr_base(lnbr, base_to);
	return (result);
}