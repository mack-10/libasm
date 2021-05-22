# CMD
NAME	=	libasm.a
C		=	nasm
CFLAG	=	-fmacho64

# SRC, OBJ
SRC		=	ft_strlen.s	\
			ft_strcpy.s	\
			ft_strcmp.s	\
			ft_write.s	\
			ft_read.s	\
			ft_strdup.s
OBJ		=	$(SRC:.s=.o)

# LIB
LIB		=	ar rcs

all : $(NAME)
# all : $(NAME) test

%.o : %.s
	$(C) $(CFLAG) $< -o $@

$(NAME) : $(OBJ)
	$(LIB) $(NAME) $^

clean :
	rm $(OBJ)

fclean : clean
	rm $(NAME)
	# rm test

re : fclean all

# test :
# 	gcc -Wall -Wextra -Werror main.c $(NAME) -o test -L. -lasm