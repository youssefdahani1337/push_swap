# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yodahani <yodahani@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 10:53:50 by yodahani          #+#    #+#              #
#    Updated: 2023/03/04 11:30:32 by yodahani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc 
CFLAGS= -Wall -Werror -Wextra 

msg_all= "\033[0;32m You can  sort [READY] \033[0m"
msg_bonus= "\033[0;32m You can  check [READY] \033[0m"
msg_comp= "\033[0;32m Push swap compiled successfly !! \033[0m"
msg_compb= "\033[0;32m Checker compiled successfly !! \033[0m"
msg_clean= "\033[0;34m The files has cleaned successfully \033[0m"
msg_fclean= "\033[0;34m The project are cleaned !! \033[0m"

NAME= push_swap
NAME_B= checker

INST_DIR=./instructions/
INST_DIR_B=./bonus/instructions_bonus/
SRCS_DIR=./sources/
BONUS_DIR=./bonus/
GNL_DIR=./bonus/gnl/

GNL_S=get_next_line.c get_next_line_utils.c
INSTR= p.c  r.c rrc.c s.c
INSTR_B= p_bonus.c  r_bonus.c rrc_bonus.c s_bonus.c
SRCS=	push_swap.c ft_splitargs.c ft_sort.c ft_small_sort.c ft_moves.c \
		ft_error.c ft_addons.c ft_sort_helper.c  ft_chunk.c  check_pos.c ft_helper_a.c
SRCS_B= checker_bonus.c ft_splitargs_bonus.c get_move_bonus.c ft_error_bonus.c

OBJS_INSTR=$(INSTR:%.c=$(INST_DIR)%.o)
OBJS=$(SRCS:%.c=$(SRCS_DIR)%.o) $(OBJS_INSTR)
OBJS_B=$(SRCS_B:%.c=$(BONUS_DIR)%.o) $(INSTR_B:%.c=$(INST_DIR_B)%.o) $(GNL_S:%.c=$(GNL_DIR)%.o)

all:libft $(NAME)
	@echo $(msg_all)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -Llibft -lft $(OBJS) -o $(NAME)
	@echo $(msg_comp)
bonus:libft $(NAME_B)
	@echo $(msg_bonus)

$(NAME_B):  $(OBJS_B)
	@$(CC) $(CFLAGS) -Llibft -lft $(OBJS_B) -o $(NAME_B)
	@echo $(msg_compb)
libft:
	@$(MAKE) -C libft -s
clean:
	@$(MAKE) -C libft clean -s
	@rm -f $(OBJS) $(OBJS_B)
	@echo $(msg_clean)

fclean: clean
	@$(MAKE) -C libft fclean -s
	@rm -f $(NAME) $(NAME_B) 
	@echo $(msg_fclean)
re: fclean all
.PHONY:all , fclean, libft ,clean
.SILENT:$(OBJS) $(OBJS_B)