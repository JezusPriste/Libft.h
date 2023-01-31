# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dborgian <dborgian@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 18:37:18 by dborgian          #+#    #+#              #
#    Updated: 2023/01/31 14:20:56 by dborgian         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

HEADER = ${NAME:.a=.h}

FILES = ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c \
ft_isprint.c ft_strlen.c \
ft_memset.c ft_bzero.c \
ft_memcpy.c ft_memmove.c \
ft_strlcpy.c ft_strlcat.c \
ft_toupper.c ft_tolower.c \
ft_strchr.c ft_strrchr.c \
ft_strncmp.c ft_memchr.c \
ft_memcmp.c ft_strnstr.c \
ft_atoi.c ft_strdup.c \
ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c \
ft_calloc.c ft_itoa.c \
ft_strmapi.c ft_striteri.c \
ft_putchar_fd.c ft_putstr_fd.c \
ft_putendl_fd.c ft_putnbr_fd.c

BONUS = #ft_lstnew.c ft_lstadd_front.c \#
		#ft_lstsize.c ft_lstlast.c \#
		#ft_lstadd_back.c ft_lstdelone.c \#
		#ft_lstclear.c ft_lstiter.c \#
		#ft_lstmap.c#

OBJ = $(FILES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

LIBC = ar rcs

#B_OBJ = $(BONUS:.c=.o)#

RM = rm -f

all: $(NAME)

$(NAME): ${OBJ}
			 ${LIBC} $(NAME) $(OBJ)
			 ranlib ${NAME}

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

clean: 
		${RM} ${OBJ}
	

fclean: clean
		${RM} ${NAME}

re: fclean all

#bonus: $(OBJ) $(B_OBJ)
	ar rcs $(NAME) $(OBJ) $(BONUS:.c=.o) $(NAME)#
