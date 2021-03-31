# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 23:36:22 by kshanti           #+#    #+#              #
#    Updated: 2021/04/01 01:18:50 by kshanti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ./srcs/
BN = ./bonus/

S_FILE =		$(SRCS)ft_strlen.s $(SRCS)ft_strcpy.s\
				$(SRCS)ft_write.s $(SRCS)ft_read.s\
				$(SRCS)ft_strcmp.s $(SRCS)ft_strdup.s

S_FILE_BONUS =	$(BN)ft_list_size_bonus.s

ifdef ADD_BONUS
	O_FILE = $(S_FILE:.s=.o) $(S_FILE_BONUS:.s=.o)
else
	O_FILE = $(S_FILE:.s=.o)
endif

ifdef ADD_BONUS
	HEAD = ./includes/head.h
else
	HEAD = ./includes/head_bonus.h
endif


all:
	@$(MAKE) $(NAME) -j 4

$(NAME): $(O_FILE)
	@ar -rcs $(NAME) $(O_FILE)
	@gcc $(NAME) main.c

%.o: %.s $(HEAD)
	@nasm -f macho64 $<

bonus:
	$(MAKE) ADD_BONUS=1 all

clean:
	@rm -f $(O_FILE)

fclean: clean
	@rm -f $(NAME)
	@rm -f a.out

re: fclean all

.PHONY: all clean fclean re bonus