# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 23:36:22 by kshanti           #+#    #+#              #
#    Updated: 2021/03/31 23:31:01 by kshanti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

HEAD = head.h
SRCS = ./srcs/

S_FILE = $(SRCS)ft_strlen.s $(SRCS)ft_strcpy.s $(SRCS)ft_write.s $(SRCS)ft_read.s $(SRCS)ft_strcmp.s $(SRCS)ft_strdup.s\
			$(SRCS)ft_list_size_bonus.s

O_FILE = $(S_FILE:.s=.o)

all:
	$(MAKE) $(NAME) -j 4

$(NAME): $(O_FILE)
	ar -rcs $(NAME) $(O_FILE)
	gcc $(NAME) main.c

%.o: %.s $(HEAD)
	nasm -f macho64 $<

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out

re: fclean all

.PHONY: all clean fclean re