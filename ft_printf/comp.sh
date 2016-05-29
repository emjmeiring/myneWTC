make fclean
make
gcc -Wall -Wextra -Werror -o main_emj.o -c main_emj.c
gcc -o test_pf main_emj.o ft_printf.o specifier_lexer.o -I ./ -I ./libft/includes -L ./ -L ./libft -lft -lftprintf
./test_pf
