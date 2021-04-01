# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kshanti <kshanti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/29 23:36:22 by kshanti           #+#    #+#              #
#    Updated: 2021/04/01 03:23:26 by kshanti          ###   ########.fr        #
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
	HEAD = ./includes/head.h
	O_FILE = $(S_FILE:.s=.o) $(S_FILE_BONUS:.s=.o)
else
	HEAD = ./includes/head_bonus.h
	O_FILE = $(S_FILE:.s=.o)
endif

all:
	@$(MAKE) $(NAME) -j 4

$(NAME): $(O_FILE)
	# gcc main/main.c main/main_utils.c libasm.a
	@ar -rcs $(NAME) $(O_FILE)

%.o: %.s $(HEAD)
	@nasm -f macho64 $<

bonus:
	#-------> gcc main/main_bonus.c main/main_utils.c libasm.a
	@$(MAKE) ADD_BONUS=1 all

clean:
	@rm -f $(O_FILE) $(S_FILE_BONUS:.s=.o)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus