# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thgiraud <thgiraud@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/09 11:25:59 by thgiraud          #+#    #+#              #
#    Updated: 2016/11/10 10:44:00 by thgiraud         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

GCFLAGS = gcc -Wall -Wextra -Werror

INC = ./libft.h

SRCS = *.c

OBJ = $(SCRS:.c=.o)

all: $(NAME)

$(NAME):
			$(GCFLAGS) -c -I $(INC) $(SRCS)
			ar rc $(NAME) *.o 

clean:
			rm -f *.o 

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
