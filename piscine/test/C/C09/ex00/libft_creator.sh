# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shwong <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/06 12:48:58 by shwong            #+#    #+#              #
#    Updated: 2023/07/06 12:49:00 by shwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
rm -f libft.a
find . -name "*.c" -type f -exec gcc -Wall -Werror -Wextra -c {} \;
ar rcs libft.a *.o
find . -name "*.o" -type f -delete