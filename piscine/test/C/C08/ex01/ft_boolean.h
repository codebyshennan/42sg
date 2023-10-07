/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shwong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 18:15:57 by shwong            #+#    #+#             */
/*   Updated: 2023/07/04 18:15:59 by shwong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

#include <unistd.h>

typedef enum a_bool{
	false = 0,
	true = 1,
}	t_bool;

# define EVEN(number) (number % 2 == 0)
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0

#endif