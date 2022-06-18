# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iel-mach <iel-mach@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 00:12:35 by iel-mach          #+#    #+#              #
#    Updated: 2022/02/03 00:47:08 by iel-mach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
MLX = -lmlx -framework OpenGL -framework AppKit
FLAGS = -Wall -Wextra -Werror
GNL = ./gnl/get_next_line_utils.c \
		./gnl/get_next_line.c
SRCS = ./src/ft_check_rectangular.c \
			./src/ft_check_variable.c \
			./src/ft_put_win.c \
			./src/ft_edit_strjoin.c \
			./src/ft_get_map.c \
			./src/ft_split.c \
			./src/ft_wall.c \
			./src/so_long_utils.c \
			./src/ft_moves.c \
			./src/ft_strdup.c \
			./src/ft_exit.c \
			./src/so_long.c
all : $(NAME)

$(NAME) : $(SRCS)
			@gcc $(FLAGS) $(SRCS)  $(GNL) $(MLX) -o $(NAME)

clean:
	@rm -f so_long

fclean: clean

re: fclean all