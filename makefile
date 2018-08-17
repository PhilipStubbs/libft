
NAME = libft.a

SRC = libft/ft_atoi.c libft/ft_bzero.c libft/ft_isalnum.c libft/ft_isalpha.c libft/ft_isascii.c libft/ft_isdigit.c libft/ft_isprint.c \
	libft/ft_memccpy.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_memset.c libft/ft_strcat.c \
	libft/ft_strchr.c libft/ft_strcmp.c libft/ft_strcpy.c libft/ft_strdup.c libft/ft_strlcat.c libft/ft_strlen.c libft/ft_strncat.c \
	libft/ft_strncpy.c libft/ft_strrchr.c libft/ft_strstr.c libft/ft_tolower.c libft/ft_toupper.c libft/ft_strnstr.c libft/ft_strncmp.c \
	libft/ft_memalloc.c libft/ft_memdel.c libft/ft_strnew.c libft/ft_strdel.c libft/ft_strclr.c libft/ft_putchar.c libft/ft_strpull_ptr.c \
	libft/ft_strpull_idx.c libft/ft_putstr.c libft/ft_putchar_fd.c libft/ft_striter.c libft/ft_striteri.c libft/ft_strmap.c libft/ft_strmapi.c  \
	libft/ft_strequ.c libft/ft_strnequ.c libft/ft_strsub.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_strsplit.c libft/ft_lstdel.c libft/ft_strchr_idx.c\
	libft/ft_itoa.c libft/ft_putendl.c libft/ft_putnbr.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_strcount.c libft/ft_lstdelone.c \
	libft/ft_putnbr_fd.c libft/ft_strrev.c libft/ft_wordlen.c libft/ft_intlen.c libft/ft_lstadd.c libft/ft_lstnew.c libft/ft_lstiter.c libft/ft_lstmap.c \
	libft/get_next_line.c libft/ft_isspace.c  libft/ft_split.c libft/ft_intcpy.c libft/ft_atol.c libft/ft_deldouble.c libft/ft_doublesize.c \
	libft/ft_printchardouble.c libft/ft_printintarray.c libft/ft_strmerge.c \
	printf_src/basicchecker.c printf_src/createpadding.c printf_src/createstruc.c printf_src/destroy.c printf_src/dynamicstring.c printf_src/findhex.c printf_src/findoct.c printf_src/findops.c printf_src/findunsdigit.c \
	printf_src/ft_itoa_base.c printf_src/ft_printf.c  printf_src/ft_uitoa.c printf_src/handlenonvalid.c printf_src/lengthmod.c printf_src/precision.c printf_src/strprocessing.c printf_src/ft_lltoa.c printf_src/wildcard.c \
	printf_src/findwchar.c printf_src/findwstr.c printf_src/wcharsupport.c printf_src/finddigit.c printf_src/findpointer.c printf_src/paddingsupportfunc.c printf_src/hexhash.c printf_src/overflowfunc.c \
	printf_src/findspecifer.c printf_src/findactions_one.c printf_src/findactions_two.c\

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) -I.includes/ -c
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all