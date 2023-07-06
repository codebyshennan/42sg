/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 17:13:22 by shwong            #+#    #+#             */
/*   Updated: 2023/06/21 20:05:44 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* the main idea is that:
		n = 2, start with 0, 1
		n = 3, start with 0, 1, 2
		n, start with n-1, n-2 .. 0
		if n = 10, there is only one combination,
		which is 0123456789, since every position
		needs to be unique
	*/

void	ft_print_combn(int n)
{
}
