make fclean
make
gcc -Wall -Werror -Wextra -c main_emj.c
gcc -o test_pf main_emj.o -I ./ -I ./libft/includes -L ./ -lftprintf -L ./libft -lft
./test_pf
