# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/04 15:04:47 by acazuc            #+#    #+#              #
#    Updated: 2016/10/14 22:23:14 by acazuc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME_COLLEEN = Colleen

NAME_GRACE = Grace

NAME_SULLY = Sully

all: $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COLLEEN):
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ Colleen.c

$(NAME_GRACE):
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ Grace.c

$(NAME_SULLY):
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ Sully.c

clean:
	@echo " - Removing objects"

fclean: clean
	@echo " - Removing executables"
	@rm -f $(NAME_COLLEEN)
	@rm -f $(NAME_GRACE)
	@rm -f $(NAME_SULLY)

re: fclean all

.PHONY: re clean fclean
