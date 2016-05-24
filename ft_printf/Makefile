NAME = libft.a
FLAG = -Wall -Wextra -Werror
PATH_SRC = ./
HEADER = ./
OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)ft_printf.c

OBJ = ft_printf.o 

all: $(NAME) fclean

$(NAME):
	gcc $(FLAG) $(OPTION) $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	

clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
