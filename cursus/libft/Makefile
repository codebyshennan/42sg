# filter out .c files that does not end with _bonus
SRC_FILES := $(wildcard *.c)
SRC_FILES := $(filter-out %_bonus.c, $(SRC_FILES))

# bonus level files
SRC_BONUS_FILES := $(wildcard *_bonus.c)

# pattern substitution
OBJS := ${SRC_FILES:.c=.o}
OBJSB := ${SRC_BONUS_FILES:.c=.o}

# compiler and flags
CC := cc
CFLAGS := -Wall -Wextra -Werror

# create a library archive, with following flags
# r: replace or add files into archive; c: create archive if doesn't exist; s: write index to archive
ARCHIVE := ar rcs
NAME := libft.a

RM := rm -f

.PHONY: all bonus clean fclean re

# default target
all: ${NAME}

# ${target}: ${prerequisite}
# build the libft.a archive with the object files
${NAME}: ${OBJS}
	${ARCHIVE} ${NAME} ${OBJS}

# build the archive with bonus files
bonus: ${NAME} ${OBJSB}
	${ARCHIVE} ${NAME} ${OBJSB}

# [.c.o] prerequisite+target. rule applies to any target ending in .o and request a corresponding source file with a .c extension
# [-c] to generate object file
# [$<] automatic var that represents the first prerequisite (.c file) in the rule
# [-o] output file
# [${<:.c=.o}] param expansion that transform source file name by replacing .c with .o
# basically, compile, with flags, each .c file into .o file
.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
# %.o: %.c
# 	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS} ${OBJSB}

fclean: clean
	${RM} ${NAME}

re: fclean all


