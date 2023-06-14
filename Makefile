# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscode <vscode@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 13:33:56 by pdavi-al          #+#    #+#              #
#    Updated: 2023/06/24 06:27:15 by vscode           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
LIB := ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f

GREEN='\033[0;32m'
RESET='\033[0m'

INC = -I ./include
SRC_DIR = ./src
SRC_FILES = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putpointer.c ft_putstr.c ft_strlen.c ft_strcpy.c ft_atoi.c ft_flags_utils.c ft_printnbr.c
SRCS := $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@echo $(GREEN)compilation success!$(RESET)

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

bonus: all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: re

build:
	$(CC) $(CFLAGS) -g $(INC) $(SRCS) -o $(NAME)

run: build
	./$(NAME)

.PHONY: all bonus clean fclean re bonus rebonus
