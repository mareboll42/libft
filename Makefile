NAME = libft.a              
SRC = ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c  //Aquí ponemos todos los archivos .c que quieres compilar
OBJ = $(SRC:.c=.o)           //Aquí se crean los archivos .o a partir de los .c (compilados)
CC = cc                      
CFLAGS = -Wall -Wextra -Werror 
AR = ar rcs                  //Para crear una librería estática (archivo .a)

all: $(NAME)                 //Regla por defecto

$(NAME): $(OBJ)             //Cómo construir la librería
	$(AR) $(NAME) $(OBJ)   //Llama a 'ar' para crear 'libft.a' con los objetos

clean:                       //Elimina los archivos intermedios .o
	rm -f $(OBJ)

fclean: clean                //Elimina también la librería final
	rm -f $(NAME)

re: fclean all               //Limpia y recompila todo desde cero
