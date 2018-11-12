NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
SOURCES= ft_bzero.c ft_memcpy.c ft_putchar.c ft_memccpy.c ft_memset.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strlen.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c ft_tolower.c ft_toupper.c
OBJ_FOLDER=out
OUT=$(addprefix $(OBJ_FOLDER)/,$(SOURCES:.c=.o))
TESTS=tests/main_test.c $(addprefix tests/,$(SOURCES:.c=_test.c))

all: $(OUT) $(NAME)
	
$(NAME): $(OUT)
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

$(OBJ_FOLDER)/%.o: %.c
	@mkdir -p $(OBJ_FOLDER)
	gcc $(CFLAGS) -o $@ -c $<

clean:
	rm -rf $(OBJ_FOLDER)

fclean: clean
	rm -rf $(NAME)

re: fclean all

test: all
	gcc $(CFLAGS) -I . $(TESTS) libft.a
