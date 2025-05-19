CC=cc
CFLAGS=-Wall -Wextra -Werror -c

NAME=libft.a
SRC=ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c

all: $(NAME)

$(NAME): $(SRC:.c=.o)
	@ar rcs $@ $<
	@echo "libft created."

%.o: %.c
	@$(CC) $(CFLAGS) $< -o $@
	@echo "${@} created."

clean:
	@rm $(SRC:.c=.o)
	@echo "object files deleted."

fclean: clean
	@rm $(NAME)
	@echo "libft deleted."

re: fclean all
	@echo "successfully recreated libft."
