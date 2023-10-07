/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:32:27 by shwong            #+#    #+#             */
/*   Updated: 2023/10/07 18:32:28 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* @brief The ft_calloc() function allocates memory for an array of nmemb elems
* of size bytes each and returns a pointer to the allocated memory. The memory
* is set to zero. If nmemb or size is 0, then ft_calloc() returns NULL.
*
* @param nmemb The number of elements to allocate memory for.
* @param size The size of each element.
* @return A pointer to the allocated memory, or NULL if an error occurred.
*/
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = (void *)malloc(nmemb * size);
	if (!array)
		return (NULL);
	ft_bzero(array, nmemb * size);
	return (array);
}
