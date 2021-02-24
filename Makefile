# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lrocca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 16:55:45 by lrocca            #+#    #+#              #
#    Updated: 2021/02/24 15:40:18 by lrocca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra
SRC			=	$(wildcard *.c)
OBJ			=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $(NAME) $(OBJ)
	@printf "%-80.80b\n" "\e[1;32m•\e[0m Compiling \033[1m$@\033[0m... done"

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@
	@printf "%-80.80b\r" "○ Compiling \033[1m$(NAME)\033[0m... $^"

clean:
	@rm -f $(OBJ)
	@printf "%-80.80b\n" "\e[1;31m•\e[0m Deleted objects for \033[1m$(NAME)\033[0m"

fclean: clean
	@rm -f $(NAME)
	@printf "%-80.80b\n" "\e[1;31m•\e[0m Deleted archive for \033[1m$(NAME)\033[0m"

re: fclean all

bonus: re

.PHONY: all bonus clean fclean re
