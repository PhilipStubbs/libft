
NAME = libft.a

SRC = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strcat.c \
	ft_strchr.c ft_strcmp.c ft_strcpy.c ft_strdup.c ft_strlcat.c ft_strlen.c ft_strncat.c \
	ft_strncpy.c ft_strrchr.c ft_strstr.c ft_tolower.c ft_toupper.c ft_strnstr.c ft_strncmp.c \
	ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_putchar.c ft_strpull_ptr.c \
	ft_strpull_idx.c ft_putstr.c ft_putchar_fd.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c  \
	ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c ft_lstdel.c ft_strchr_idx.c\
	ft_itoa.c ft_putendl.c ft_putnbr.c ft_putstr_fd.c ft_putendl_fd.c ft_strcount.c ft_lstdelone.c \
	ft_putnbr_fd.c ft_strrev.c ft_wordlen.c ft_intlen.c ft_lstadd.c ft_lstnew.c ft_lstiter.c ft_lstmap.c \
	get_next_line.c ft_isspace.c  ft_split.c \

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I. -c
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all