# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 11:11:28 by gozsertt          #+#    #+#              #
#    Updated: 2019/04/05 12:17:06 by gozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/*.c

INCLUDES = ./includes/*.h

OBJECTS = ./*.o

GCC = gcc -Wall -Werror -Wextra

AR = ar -rc

all : $(NAME)

$(NAME) :
	$(GCC) -c $(SRCS) -I $(INCLUDES)
	$(AR) $(NAME) $(OBJECTS)

clean :
	/bin/rm -Rf $(OBJECTS)

fclean : clean
	/bin/rm -Rf $(NAME)

re : fclean all
