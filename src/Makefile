CC			=			gcc
CFLAGS	=		-Wall -Wextra -Werror
NAME		=		../libft.a
SRC		=		ft_putchar.c \
					ft_putstr.c \
					ft_memset.c \
					ft_bzero.c \
					ft_memcpy.c \
					ft_memccpy.c \
					ft_memmove.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strlen.c \
					ft_strdup.c \
					ft_strcpy.c \
					ft_strncpy.c

OBJ		=		$(SRC:%.c=%.o)
RM			=		rm -rf
AR			=		ar r

$(NAME):	$(OBJ)
			$(AR) $(NAME) $(OBJ)

all: 		$(NAME)

clean:
			$(RM) $(OBJ)
fclean:	clean
			$(RM) $(NAME)

re:		clean fclean all

%.o:%.c
			$(CC) $(CFLAGS) -c $<
