# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shwong <shwong@student.42singapore.sg>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/15 14:20:12 by shwong            #+#    #+#              #
#    Updated: 2023/10/15 15:25:45 by shwong           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
INCLUDES = -I ../include
SRC_DIR = src/
OBJ_DIR = obj/
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm
AR = ar rcs

FT_IS_DIR = ft_is/
FT_MEM_DIR = ft_mem/
FT_PUT_DIR = ft_put/
FT_STR_DIR = ft_str/
FT_TO_DIR = ft_to/
FT_LST_DIR = ft_lst/

FT_IS = ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint
FT_MEM = ft_bzero ft_calloc ft_memchr ft_memcmp ft_memmove ft_memset
FT_PUT = ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd
FT_STR = ft_split ft_strchr ft_strdup ft_strjoin ft_strlcat
		ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr
		ft_strrchr ft_strtrim ft_substr
FT_TO = ft_atoi ft_itoa ft_tolower ft_toupper
FT_LST = ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone
		ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

SRC_FILES+= $(addsuffix $(FT_IS_DIR), $(FT_IS))
SRC_FILES+= $(addsuffix $(FT_MEM_DIR), $(FT_MEM))
SRC_FILES+= $(addsuffix $(FT_PUT_DIR), $(FT_PUT))
SRC_FILES+= $(addsuffix $(FT_STR_DIR), $(FT_STR))
SRC_FILES+= $(addsuffix $(FT_TO_DIR), $(FT_TO))
SRC_FILES+= $(addsuffix $(FT_LST_DIR), $(FT_LST))

SRCS = $(addsuffix .c, $(addprefix $(SRC_DIR), $(SRC_FILES)))
OBJS = $(addsuffix .o, $(addprefix $(OBJ_DIR), $(SRC_FILES)))

OBJSF = .cache_exists

all: $(NAME)

# 	ranlib adds or updates object files in a static library. Linkers can use static libraries when linking in order to provide symbols that the code needs in order to operate (as opposed to the loader looking for them in dynamic libraries when running the executable).

# Target rule to create the library file
# Archive the object files into a static library
# Generate an index of contents for the library archive
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@ranlib $(NAME) 
	@echo "libft.a created" 

# Rule to compile object files from source files
$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJSF)
	@echo "Compiling $<"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Create the cache directory if it doesn't exist, by first creagint the parent OBJS_DIR, and then the other child directories ending with _DIR
$(OBJSF):
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_IS_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_MEM_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_PUT_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_STR_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_TO_DIR))
	@mkdir -p $(addprefix $(OBJ_DIR), $(FT_LST_DIR))
	@touch $(OBJSF)

clean:
	@$(RM) -rf $(OBJS)
	@$(RM) -f $(OBJSF)
	@echo "Object files removed"

fclean: clean
	@$(RM) -f $(NAME)
	@echo "libft.a removed"

re: fclean all
	@echo "libft.a recompiled"


.PHONY: all clean fclean re
