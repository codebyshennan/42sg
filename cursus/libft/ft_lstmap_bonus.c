/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:34:02 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:34:03 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates the list 'lst' and applies the function 'f' to the content
 * Iterates the list 'lst' and applies the function 'f' to the content of each
 * element. Creates a new list resulting of the successive applications of the
 * function 'f'. The 'del' function is used to delete the content of an element
 * if needed.
 * 
 * @param lst The address of a pointer to the first link of a list.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete the content of an
 * element if needed.
 * 
 * @return The new list. NULL if the allocation fails.
 */

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			return (NULL);
		}
		ft_lstadd_back(&new, node);
		lst = lst->next;
	}
	return (new);
}
