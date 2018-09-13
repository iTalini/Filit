# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akurilen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/27 16:32:03 by akurilen          #+#    #+#              #
#    Updated: 2017/12/10 15:39:39 by akurilen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = ft_m.c prov.c ft_abc.c ft_else.c main.c

CFLAGS = -Wall -Wextra -Werror -I./libft

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -o $(NAME) $(SRC) libft/libft.a

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
