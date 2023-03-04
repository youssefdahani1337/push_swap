# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 16:02:51 by yodahani          #+#    #+#              #
#    Updated: 2023/03/04 11:33:32 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC = cc
CFLAGS =  -Wall -Wextra -Werror
SRC_printf = ft_printf.c ft_putnbr.c ft_putstr.c ft_putbase.c
msg_libft="\033[0;32m Compiling libft... \033[0m"

SRC =	ft_atoi.c \
		ft_isdigit.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strjoin.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstnew_bonus.c \
		ft_lstsize_bonus.c \

OBJ= $(SRC:.c=.o) $(SRC_printf:.c=.o)
OBJ_bonus = $(SRC_bonus:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
	@echo $(msg_libft)
	@ar -rcs $(NAME) $(OBJ)

clean:
	rm -f ${OBJ}
	rm -f ${OBJ_bonus}
fclean: clean
	rm -f $(NAME)

re: fclean all
