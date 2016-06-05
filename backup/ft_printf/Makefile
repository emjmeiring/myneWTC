NAME = libftprintf.a
FLAG = -Wall -Wextra -Werror
PATH_SRC = ./
HEADER = ./ 
LINK = -I
LIBINCLUDES = ./libft/includes
OPTION = -c -I $(HEADER)

SRC = $(PATH_SRC)Even_Realer.c $(PATH_SRC)master_chef.c $(PATH_SRC)get_flag.c $(PATH_SRC)print_able_string.c $(PATH_SRC)print_able_digit.c

OBJ = Even_Realer.o master_chef.o get_flag.o print_able_string.o print_able_digit.o

all: $(NAME)

$(NAME):
	#make -C libft/ fclean && make -C libft/
	gcc $(FLAG) $(SRC) -c -I ./libft/includes/ -L ./libft/ -lft
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
	
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
