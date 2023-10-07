/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:16:09 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:16:11 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	- create a fn that takes an array of strings as arg and size of the array
	- transform each el of arr into a struct
	- struct will be defined in the `ft_stock_str.h` file

	```
	typedef struct s_stock_str
	{
		int		size;
		char	*str;
		char	*copy;
	}	t_stock_str
	```

	- order of arr should be kept
	- returned array should be alloc in mem and it's last el's str set to 0,
	marking the end of the array
	- return a NULL if err occurs
*/

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str 	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock_str_arr;

	stock_str_arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	while (i < ac)
	{
		stock_str_arr[i].size = ft_strlen(av[i]);
		stock_str_arr[i].str = av[i];
		stock_str_arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock_str_arr[i].str = 0;
	return (stock_str_arr);
}