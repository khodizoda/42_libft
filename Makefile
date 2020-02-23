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

NAMES = ./ft_memset ./ft_bzero ./ft_memcpy ./ft_memccpy ./ft_memmove ./ft_memchr \
		./ft_memcmp ./ft_strlen ./ft_strdup ./ft_strcpy ./ft_strncpy \
		./ft_strcat ./ft_strncat ./ft_strlcat ./ft_strchr ./ft_strrchr \
		./ft_strstr ./ft_strnstr ./ft_strcmp ./ft_strncmp ./ft_atoi \
		./ft_isalpha ./ft_isdigit ./ft_isalnum ./ft_isascii ./ft_isprint \
		./ft_toupper ./ft_tolower ./ft_memalloc ./ft_memdel ./ft_strnew \
		./ft_strdel ./ft_strclr ./ft_striter ./ft_striteri ./ft_strmap ./test \

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

fclean: clean
	@/bin/rm -rf $(NAME) $(EXE) 

re: fclean all
