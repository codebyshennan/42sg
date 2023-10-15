/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:11 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:12 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of elements in a list.
 * 
 * @param lst The beginning of the list.
 * 
 * @return The length of the list.
 */
int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*list_ptr;

	if (!lst)
		return (0);
	list_ptr = lst;
	count = 0;
	while (list_ptr)
	{
		count++;
		list_ptr = list_ptr->next;
	}
	return (count);
}
