NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
PATH_SRC = ./
HEADER = ./ 
LINK = -I
LIBINCLUDES = ./libft/includes
OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)Even_Realer.c $(PATH_SRC)master_chef.c #$(PATH_SRC)specifier_lexer.c 

OBJ = Even_Realer.o master_chef.o #specifier_lexer.o 

all: $(NAME)

$(NAME):
	#make -C libft/ fclean && make -C libft/
	gcc $(FLAG) -I ./ -I ./libft/includes/ $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
	
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
