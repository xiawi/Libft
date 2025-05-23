CC=cc
CFLAGS=-Wall -Wextra -Werror -c

NAME=libft.a
SRC=	ft_isalpha.c		ft_isdigit.c		ft_isalnum.c		ft_isascii.c		ft_isprint.c\
		ft_strlen.c			ft_memset.c			ft_bzero.c			ft_memcpy.c			ft_memmove.c\
		ft_strlcpy.c		ft_strlcat.c		ft_toupper.c		ft_tolower.c		ft_strchr.c\
		ft_strrchr.c		ft_strncmp.c		ft_memchr.c			ft_memcmp.c			ft_strnstr.c\
		ft_atoi.c			ft_calloc.c			ft_strdup.c			ft_substr.c			ft_strjoin.c\
		ft_strtrim.c		ft_split.c			ft_itoa.c			ft_strmapi.c		ft_striteri.c\
		ft_putchar_fd.c		ft_putstr_fd.c		ft_putendl_fd.c		ft_putnbr_fd.c
BONUS=	ft_lstnew.c			ft_lstadd_front.c	ft_lstsize.c		ft_lstlast.c		ft_lstadd_back.c\
		ft_lstdelone.c		ft_lstclear.c		ft_lstiter.c		ft_lstmap.c

all: $(NAME)

bonus: $(BONUS:.c=.o)
	@ar rcs $(NAME) $^
	@echo "bonus functions added to libft."

$(NAME): $(SRC:.c=.o)
	@ar rcs $@ $^
	@echo "libft created."

%.o: %.c
	@$(CC) $(CFLAGS) $< -o $@
	@echo "${@} created."

clean:
	@rm -f $(SRC:.c=.o) $(BONUS:.c=.o)
	@echo "object files deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "libft deleted."

re: fclean all
	@echo "successfully recreated libft."

.PHONY: all clean fclean re
