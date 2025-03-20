NAME = libftprintf.a

CC = gcc 
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c print_char.c print_string.c print_decimal.c print_pointer.c print_unsigned.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all : $(NAME)

$(NAME): $(OBJ) 
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT) .
	@mv libft.a $(NAME)
	@ar rcs $(NAME) $(OBJ)
	@echo "LIBRERÍA $(NAME) CREADA"

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c -o $@ $<

clean :
	@rm -rf $(OBJ)
	@make clean -C $(LIBFT_DIR)
	@echo "Archivos objeto eliminados"

fclean : clean 
	@rm -rf $(NAME) libft.a
	@make fclean -C $(LIBFT_DIR)
	@echo "LIBRERÍA $(NAME) HA SIDO LIMPIADA COMPLETAMENTE"
 
re : fclean all
.PHONY: all clean fclean re
