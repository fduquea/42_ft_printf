# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fduque-a <fduque-a@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 10:48:30 by fduque-a          #+#    #+#              #
#    Updated: 2023/05/02 11:50:57 by fduque-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
OBJ_DIR = objs/
SRC_DIR = srcs/
RM = rm -f
HDR = -I -I../libft

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

# Sources to objects
SRC_FILES = ft_printf ft_printf_param ft_printf_hex ft_printf_uns
SRC = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

# Rules

$(NAME) : $(OBJ)
	@ make -C libft
	@ echo "$(GREEN)Made libft.a with sucess$(DEF_COLOR)"
	@ cp libft/libft.a .
	@ echo "$(GREEN)Copied libft.a with sucess$(DEF_COLOR)"
	@ mv libft.a $(NAME)
	@ echo "$(GREEN)Renamed libft.a to libftprintf.a$(DEF_COLOR)"
	@ $(AR) $(NAME) $(OBJ)
	@ echo "$(GREEN)Updated libftprintf.a$(DEF_COLOR)"
	@ echo "$(BLUE)Compiled libftprintf.a with sucess!$(DEF_COLOR)"


$(OBJ_DIR)%.o : $(SRC_DIR)%.c
	@ mkdir -p $(OBJ_DIR)
	@ echo "$(GREEN)Folder for object files created$(DEF_COLOR)"
	@ echo "$(YELLOW)Compiling: $<$(DEF_COLOR)"
	@ $(CC) $(CFLAGS) $(HDR) -c $< -o $@
	@ echo "$(GREEN)Object files created with sucess$(DEF_COLOR)"

all : $(NAME)

clean :
	@ $(RM) -rf $(OBJ_DIR)
	@ echo "$(RED)Removed printf object files$(DEF_COLOR)"
	@ make clean -C libft
	@ echo "$(RED)Removed libft object files$(DEF_COLOR)"

fclean : clean
	@ $(RM) $(NAME)
	@ echo "$(RED)Removed 'libftprintf.a' with sucess$(DEF_COLOR)"
	@ $(RM) libft/libft.a
	@ echo "$(RED)Removed 'libft.a' with sucess$(DEF_COLOR)"
	
re : fclean all

# test :
# 	@$(CC) $(CFLAGS) $(HDR) -c main.c -o main.o
# 	@$(CC) $(FLAGS) -o output main.o -L. -lftprintf
# 	@echo "$(CYAN)Output:$(DEF_COLOR)"
# 	@./output
	
.PHONY:		all clean fclean re test