# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gozsertt <gozsertt@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/05 15:54:41 by gozsertt          #+#    #+#              #
#    Updated: 2019/04/05 19:10:09 by gozsertt         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

SRCS = ./*.c

OBJECTS = ./*.o

HEADER = ./*.h.gch

INCLUDE = ./*.h

GCC = gcc -Wall -Werror -Wextra

all : $(NAME)

$(NAME) :
	$(GCC) -c $(SRCS) $(INCLUDE)
	$(GCC) $(OBJECTS) -o $(NAME)

clean :
	/bin/rm -Rf $(OBJECTS) $(HEADER)

fclean : clean
	/bin/rm -Rf $(NAME)

re : fclean all
