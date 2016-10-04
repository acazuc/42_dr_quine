# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/10/04 15:04:47 by acazuc            #+#    #+#              #
#    Updated: 2016/10/04 15:18:16 by acazuc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME_COLLEEN = Colleen

NAME_GRACE = Grace

NAME_SULLY = Sully

SRCS_COLLEEN = Colleen.c

SRCS_GRACE = Grace.c

SRCS_SULLY = Sully.c

OBJS_COLLEEN = Colleen.o

OBJS_GRACE = Grace.o

OBJS_SULLY = Sully.o

all: $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(NAME_COLLEEN): $(OBJS_COLLEEN)
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ $<

$(NAME_GRACE): $(OBJS_GRACE)
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ $<

$(NAME_SULLY): $(OBJS_SULLY)
	@echo " - Compiling $@"
	@$(CC) $(CFLAGS) -o $@ $<

%.o: %.c
	@echo " - Compiling $<"
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@echo " - Removing objects"
	@rm -f $(OBJS_COLLEEN)
	@rm -f $(OBJS_GRACE)
	@rm -f $(OBJS_SULLY)

fclean: clean
	@echo " - Removing executables"
	@rm -f $(NAME_COLLEEN)
	@rm -f $(NAME_GRACE)
	@rm -f $(NAME_SULLY)

re: fclean all

.PHONY: re clean fclean
