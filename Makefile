# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phanosek <phanosek@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 15:27:47 by phanosek          #+#    #+#              #
#    Updated: 2023/02/02 14:06:22 by phanosek         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalnum.c ft_isprint.c ft_atoi.c \
ft_isdigit.c ft_strlcpy.c ft_isalpha.c ft_isascii.c \
ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c ft_strlcat.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
ft_calloc.c ft_strdup.c ft_strjoin.c ft_substr.c ft_strtrim.c \
ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

SBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

CC = cc

HEADER = libft.h

OBJECTS = $(SOURCES:.c=.o)

OBONUS = $(SBONUS: .c=.o)

CFLAGS += -Wall -Wextra -Werror

RM = rm -f

all: $(NAME) $(BONUS)

$(NAME): ${OBJECTS} 
		ar rcs ${NAME} ${OBJECTS} 

bonus: $(OBONUS) $(OBJECTS)
		ar rcs ${NAME} ${OBONUS} 

%.o : %.c
	$(CC) -c $(CFLAGS) -I $(HEADER) $< -o $@ 

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re

	
