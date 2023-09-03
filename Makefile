vpath %.c src/

CC = cc
LIB := ar rcs
CFLAGS := -Wextra -Wall -Werror
CFLAGS += -O3 -g3
NAME = libftprintf.a
RM = rm -f

OBJ_DIR := build

INCLUDE_DIR := include
INCLUDES := -I$(INCLUDE_DIR)

INC = -I ./include
SRCS = ft_printf.c ft_putchar.c ft_putnbr_base.c ft_putnbr.c
SRCS += ft_putpointer.c ft_putstr.c ft_strlen.c ft_strcpy.c 
SRCS += ft_flags_utils.c ft_printnbr.c ft_atoi.c
OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

GREEN='\033[0;32m'
RESET='\033[0m'

all: $(NAME)
	@echo $(GREEN)compilation success!$(RESET)

$(NAME): $(OBJS)
	$(LIB) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

bonus: all

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

rebonus: re

.PHONY: all bonus clean fclean re bonus rebonus
