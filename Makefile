# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gkhodizo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/19 15:57:52 by gkhodizo          #+#    #+#              #
#    Updated: 2020/02/19 15:57:54 by gkhodizo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

EXE = test

GCC = gcc

CC = gcc -c

CCFLAGS = -g -Wall -Wextra -Werror -I./libft.h

HEADER = ./libft.h

NAMES = ./ft_memset ./ft_bzero ./ft_memcpy ./ft_memccpy ./ft_memmove \
		./ft_memchr ./ft_memcmp ./ft_strlen ./tests

SRCS = $(addsuffix .c, $(NAMES))

OBJ = $(addsuffix .o, $(NAMES))

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(EXE): $(OBJ)
	$(GCC) $(CFLAGS) $(SRCS) -o $(EXE)

$(OBJ): $(SRCS) $(HEADER)
	$(CC) $(CFLAGS) $(SRCS)

all: $(NAME)

exe: $(EXE)

clean:
	@/bin/rm -f $(OBJ)

fclean:
	@/bin/rm -rf $(NAME) $(EXE)

re: fclean all
