# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: naplouvi <naplouvi@student.le-101.fr>      +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/10/09 11:38:05 by naplouvi     #+#   ##    ##    #+#        #
#    Updated: 2018/10/16 15:54:42 by naplouvi    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

HEADER = libft.h

SRC = 	ft_atoi.c\
		ft_bzero.c\
		ft_count_words.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_iswhitespace.c\
		ft_itoa.c\
		ft_lst_last.c\
		ft_lstadd.c\
		ft_lstdel.c\
		ft_lstdelone.c\
		ft_lstiter.c\
		ft_lstmap.c\
		ft_lstnew.c\
		ft_lstrev.c\
		ft_memalloc.c\
		ft_memccpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memcpy.c\
		ft_memdel.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar.c\
		ft_putchar_fd.c\
		ft_putendl.c\
		ft_putendl_fd.c\
		ft_putnbr.c\
		ft_putnbr_fd.c\
		ft_putstr.c\
		ft_putstr_fd.c\
		ft_strcat.c\
		ft_strchr.c\
		ft_strclr.c\
		ft_strcmp.c\
		ft_strcpy.c\
		ft_strdel.c\
		ft_strdup.c\
		ft_strequ.c\
		ft_striter.c\
		ft_striteri.c\
		ft_strjoin.c\
		ft_strlcat.c\
		ft_strlen.c\
		ft_strmap.c\
		ft_strmapi.c\
		ft_strncat.c\
		ft_strncmp.c\
		ft_strncpy.c\
		ft_strnequ.c\
		ft_strnew.c\
		ft_strnstr.c\
		ft_strrchr.c\
		ft_strrev.c\
		ft_strsplit.c\
		ft_strstr.c\
		ft_strsub.c\
		ft_strtrim.c\
		ft_swap.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_word_len.c

OBJ = $(subst .c,.o,$(SRC))

LIGHT_RED = \033[0;38;5;9m

RED = \033[0;38;5;196m

BLUE = \033[0;38;5;123m

LIGHT_GREEN = \033[0;38;5;121m

GREEN = \033[33;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLUE)\nFichiers compilés"
	@ar rc $(NAME) $(OBJ)
	@echo "$(LIGHT_GREEN)Creation de la libft"
	@ranlib $(NAME)
	@echo "$(GREEN)Indexation de la libft"

%.o: %.c libft.h
	@gcc $(FLAGS) -o $@ -c $<
	@echo "$(BLUE).\c"

clean:
	@rm -rf $(OBJ)
	@echo "$(LIGHT_RED)Suppression des .o"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Suppression de" $(NAME)

re: fclean all
