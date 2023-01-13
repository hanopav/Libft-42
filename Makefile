# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 15:27:47 by phanosek          #+#    #+#              #
#    Updated: 2023/01/13 15:15:30 by phanosek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES = ft_isalnum ft_isprint ft_atoi ft_isdigit ft_strlcpy
CC = gcc
OBJECTS = $(SOURCES:.c=.o)
CFLAGS += -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJECTS)
		ar rcs $(NAME) $(OBJECTS)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: 
	fclean $(NAME)

.PHONY: all clean fclean re

	
