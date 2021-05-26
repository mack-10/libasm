# CMD
NAME	=	libasm.a
C		=	nasm
CFLAG	=	-fmacho64

# SRC, OBJ
SRC_PATH	=	srcs/
SRC_NAME	=	ft_strlen.s	\
				ft_strcpy.s	\
				ft_strcmp.s	\
				ft_write.s	\
				ft_read.s	\
				ft_strdup.s
SRC			=	$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ_PATH	=	objs/
OBJ			=	$(addprefix $(OBJ_PATH), $(SRC_NAME:.s=.o))

# LIB
LIB		=	ar rcs

# COMMAND
all : $(NAME)

$(OBJ_PATH)%.o : $(SRC_PATH)%.s
	$(C) $(CFLAG) $< -o $@

$(NAME) : $(OBJ)
	$(LIB) $(NAME) $^

clean :
	rm -rf $(OBJ_PATH)*

fclean : clean
	rm $(NAME)

re : fclean all

test :
	gcc -Wall -Wextra -Werror -Iincludes -L. -lasm main.c $(NAME) -o test
