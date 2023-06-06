LIB = ar rcs
RM = rm -f

NAME = libft.a

MY_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_strlcpy.c\
ft_strlen.c ft_strnstr.c ft_strncmp.c ft_tolower.c ft_toupper.c ft_memset.c ft_memcpy.c ft_memmove.c\
ft_bzero.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_strjoin.c ft_strmapi.c ft_striteri.c ft_putnbr_fd.c ft_substr.c ft_strtrim.c\
ft_itoa.c ft_split.c\

MY_OBJECTS = $(MY_SOURCES:.c=.o)

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c\
ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c\

BONUS_OBJECTS = $(BONUS:.c=.o)

CFLAGS += -Wall -Wextra -Werror

$(NAME): $(MY_OBJECTS) libft.h
			$(LIB) $(NAME) $(MY_OBJECTS)
bonus: $(MY_OBJECTS) $(BONUS_OBJECTS) libft.h
			$(LIB) $(NAME) $(BONUS_OBJECTS) $(MY_OBJECTS)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

all: $(NAME)

clean:
			$(RM) $(MY_OBJECTS) $(BONUS_OBJECTS)
fclean:clean
			$(RM) $(NAME) 
re: fclean all
rebonus: fclean bonus

