# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mareboll <mareboll@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 15:48:45 by mareboll          #+#    #+#              #
#    Updated: 2025/05/21 15:48:46 by mareboll         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a              
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
ft_memset.c ft_memchr.c ft_memcmp.c ft_bzero.c ft_strnstr.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
 ft_putendl_fd.c ft_putnbr_fd.c ft_strncmp.c ft_strrchr.c #Aquí ponemos todos los archivos .c que quieres compilar
OBJ = $(SRC:.c=.o)           #Aquí se crean los archivos .o a partir de los .c (compilados)

CC = cc                      
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs                  #Para crear una librería estática (archivo .a)

all: $(NAME)                 #Regla por defecto

$(NAME): $(OBJ)             #Cómo construir la librería; llama a 'ar' para crear 'libft.a' con los objetos
	$(AR) $(NAME) $(OBJ)  

clean:                       #Elimina los archivos intermedios .o
	rm -f $(OBJ)

fclean: clean                #Elimina también la librería final
	rm -f $(NAME)

re: fclean all               #Limpia y recompila todo desde cero

.PHONY: all clean fclean re #evitamos que no se confundan los comandos con los archivos de mi libreria
