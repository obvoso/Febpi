# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: soo <soo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/20 09:45:30 by soo               #+#    #+#              #
#    Updated: 2022/02/20 18:46:15 by soo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror -c

SRC_DIR = srcs
INC_DIR = includes

TARGET = libft.a

SRCS = $(SRC_DIR)/ft_putchar.c $(SRC_DIR)/ft_swap.c $(SRC_DIR)/ft_putstr.c $(SRC_DIR)/ft_strlen.c $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)

all : $(TARGET)

$(TARGET) : $(OBJS)
	ar rc $@ $^

%.o : %.c
	$(CC) $(CFLAGS) $^ -o $@ -I $(INC_DIR)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

re : fclean all

.PHONY : all clean fclean re
