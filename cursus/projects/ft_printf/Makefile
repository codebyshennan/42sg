# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 15:27:54 by shwong            #+#    #+#              #
#    Updated: 2023/10/15 16:52:31 by shwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= lib_ftprintf.a
INCLUDES	= -I include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm
AR			= ar rcs

SRC_FILES	= ft_printf ft_printf_utils ft_print_ptr ft_print_unsigned ft_print_hex

SRCS		= $(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_FILES)))
OBJS		= $(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_FILES)))

OBJSF		= .cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a .
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJS)
	@echo "Library created"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJSF)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)
	@echo "Object files removed"

fclean: clean
	@$(RM) -f $(NAME)
	@$(RM) -f $(LIBFT)/libft.a
	@echo "Library removed"
	@echo "libft.a removed"

re: fclean all
	@echo "Recompiled"

.PHONY: all clean fclean re
