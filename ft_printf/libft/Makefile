# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 17:49:20 by fduque-a          #+#    #+#              #
#    Updated: 2023/05/02 11:16:40 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#  Makefile

# ar - create, modify and extract from archives

# rcs 
# c -Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.
# r -Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.
# s -Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running ranlib on it.

# Colors
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# Variables
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CREATE = ar rcs
RM = rm -f
HDR = -I.

# source files to object files
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c 
SRCS += ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_strrchr.c ft_tolower.c 
SRCS += ft_toupper.c ft_strncmp.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
SRCS += ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar.c
SRCS_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = ${SRCS:.c=.o}
OBJS_BONUS = ${SRCS_BONUS:.c=.o}

# pattern rule that specifies how to create an object file using a source file
%.o : %.c 
	@ echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@ ${CC} ${CFLAGS} ${HDR} -c $< -o $@

$(NAME) : ${OBJS}
	@ ${CREATE} ${NAME} *.o
	@ echo "$(BLUE)Compiled libft.a with sucess!$(DEF_COLOR)"

all : ${NAME}

bonus : ${OBJS_BONUS}
	@ ${CREATE} ${NAME} $^
	@ echo "$(GREEN)LIBFT compiled with bonus$(DEF_COLOR)"

clean :
	@ ${RM} *.o
	@ echo "$(RED)Removed libft object files$(DEF_COLOR)"

fclean : clean
	@ ${RM} ${NAME}
	@ echo "$(RED)Removed 'libft.a' with sucess$(DEF_COLOR)"

re : fclean all
	@ echo "$(GREEN)Cleaned and rebuilt everything for LIBFT!$(DEF_COLOR)"

.PHONY : all clean fclean re bonus
