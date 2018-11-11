# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alfranco <alfranco@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 20:44:39 by alfranco          #+#    #+#              #
#    Updated: 2018/11/11 12:37:06 by alfranco         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM_NAME = rush-02
CC = /usr/bin/gcc
AR = /usr/bin/ar
CFLAGS = -Wall -Wextra -Werror
MAIN = main.c

SRC = ./ex0*/*.c
OBJS = ./*.o

all: $(PROGRAM_NAME)

$(PROGRAM_NAME):
	$(CC) $(CFLAGS) $(SRC) $(MAIN)

clean:
	rm -f $(OBJS)

fclean: clean
