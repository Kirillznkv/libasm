# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 23:36:22 by kshanti           #+#    #+#              #
#    Updated: 2021/03/30 00:20:01 by kshanti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

HEAD = head.h
SRCS = ./srcs/

S_FILE = $(srcs)ft_strlen.s

O_FILE = $(S_FILE:.s=.o)

all:
	$(MAKE) $(NAME) -j 4

$(NAME): $(O_FILE)
	gcc -o $(O_FILE) main.c
	#gcc $(O_FILE) ./libft/libft.a $(MLX) -o $(NAME)

%.o: %.s $(HEAD)
	nasm -felf64 $< -o $@
	#gcc -c $(СFLAGS) $< -o $@

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re