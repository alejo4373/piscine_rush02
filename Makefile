# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 20:44:39 by alfranco          #+#    #+#              #
#    Updated: 2018/11/11 22:44:17 by alfranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME = colle-2
LIB_NAME = libft_rush.a
CC = /usr/bin/gcc
AR = /usr/bin/ar
CFLAGS = -Wall -Wextra -Werror
MAIN = main.c

SRC = ./src/*.c
OBJS = ./*.o

all: $(PROGRAM_NAME)

$(PROGRAM_NAME):
	$(CC) $(CFLAGS) -c $(SRC)
	$(AR) -crs $(LIB_NAME) $(OBJS)
	$(CC) $(CFLAGS) $(MAIN) -L. -lft_rush -o $(PROGRAM_NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(LIB_NAME) $(PROGRAM_NAME)
