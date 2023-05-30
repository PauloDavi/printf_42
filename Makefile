# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscode <vscode@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/24 13:33:56 by gcoqueir          #+#    #+#              #
#    Updated: 2023/06/05 03:08:34 by vscode           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
LIB := ar rcs
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
RM = rm -f

INC = -I./include
SRC_DIR = ./src
SRC_FILES = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c ft_putpointer.c ft_putstr.c ft_strlen.c
SRCS := $(addprefix $(SRC_DIR)/,$(SRC_FILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)
	@echo compilation success!

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

build: test
	gcc -g -Iinclude $(SRCS) ./main.c -o test 

.PHONY: all bonus clean fclean re bonus
